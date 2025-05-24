using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using MonoPatcher.Scripting;
using System.IO;
using System.Threading.Tasks;

namespace MonoPatcher.UI
{
    public struct ErrorPosition
    {
        public int Line
        {
            get;
            private set;
        }

        public int Column
        {
            get;
            private set;
        }

        public ErrorPosition(int line, int column)
        {
            Line = line;
            Column = column;
        }
    }

    public partial class EditorForm : Form, ILogger
    {
        public sealed class EditorContext
        {
            public const string CodeTemplate = @"
using System;
using System.IO;
using MonoPatcher.Scripting;
            
public static class Script
{
    public static void Run()
    {

    }
}

        ";

            private EditorForm editorForm;

            public string FileName
            {
                get;
                set;
            }

            public bool IsChanged
            {
                get;
                set;
            }

            public Dictionary<int, ErrorPosition> LogErrorPositions
            {
                get;
                set;
            }

            public AutoCompleteManager AutoCompleteManager
            {
                get;
                set;
            }

            public EditorContext(EditorForm parent)
            {
                editorForm = parent;

                AutoCompleteManager = new AutoCompleteManager();
                AutoCompleteManager.BuildAutoCompletionCache();

                LogErrorPositions = new Dictionary<int, ErrorPosition>();
            }

            public void CreateNewDocument()
            {
                FileName = null;
                IsChanged = true;

                editorForm.codeEditor.Text = CodeTemplate;

                editorForm.ClearLog();
                editorForm.UpdateTitle();
            }

            public void OpenExplicit(string fileName)
            {
                try
                {
                    FileName = fileName;

                    IsChanged = false;
                    editorForm.codeEditor.Text = File.ReadAllText(FileName);
                }
                catch (IOException e)
                {
                    MessageBox.Show("Failed to open file " + fileName, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                    CreateNewDocument();
                }
            }

            public void OpenDocument()
            {
                OpenFileDialog dlg = new OpenFileDialog();
                dlg.Filter = "Scripts|*.cs|All files|*.*";
                if (dlg.ShowDialog() == DialogResult.OK)
                    OpenExplicit(dlg.FileName);
            }

            public void SaveDocument()
            {
                if (FileName == null)
                {
                    SaveFileDialog dlg = new SaveFileDialog();
                    dlg.Filter = "Scripts|*.cs|All files|*.*";
                    if (dlg.ShowDialog() == DialogResult.OK)
                        FileName = dlg.FileName;
                    else
                        return;

                    IsChanged = false;
                }

                File.WriteAllText(FileName, editorForm.codeEditor.Text);
            }
        }

        

        public EditorContext Context
        {
            get;
            private set;
        }
        

        private PatchScript script;

        public EditorForm()
        {
            InitializeComponent();
            
            PrepareScriptContext();
            SetupEditor();

            Context.CreateNewDocument();
        }

        private void PrepareScriptContext()
        {
            // Attach log and create script context
            Scripting.Patcher.Log = this;

            script = new PatchScript(this);
        }

        private void SetupEditor()
        {
            Context = new EditorContext(this);

            VPKSoft.ScintillaLexers.ScintillaLexers.CreateLexer(codeEditor, "test.cs");
            //codeEditor.CharAdded += OnCharacterAdded;
        }

        private void OnCharacterAdded(object sender, ScintillaNET.CharAddedEventArgs e)
        {
            int pos = codeEditor.CurrentPosition;

            if (!codeEditor.AutoCActive)
                codeEditor.AutoCShow(pos - codeEditor.WordStartPosition(pos, true), Context.AutoCompleteManager.AutoCompleteKeywords);

            Context.IsChanged = true;
            UpdateTitle();
        }

        public void UpdateTitle()
        {
            if (Context.FileName != null)
                Text = string.Format("MonoPatcher - {0} {1}", Context.FileName, Context.IsChanged ? "*" : "");
            else
                Text = "MonoPatcher";
            
        }

        private void ClearLog()
        {
            Context.LogErrorPositions.Clear();
            logText.Clear();
        }

        private void PrintLog(Color color, string str, params object[] args)
        {
            Invoke(new Action(() =>
            {
                string text = string.Format(str, args) + '\n';
                int textStart = logText.SelectionStart;

                logText.AppendText(text);
                int currPos = logText.SelectionStart;

                logText.Select(textStart, text.Length);
                logText.SelectionColor = color;
                // logText.Select(currPos, 0);
            }));
            
        }

        public void WriteLine(string str, params object[] args)
        {
            PrintLog(Color.Black, str, args);
        }

        public void WriteError(string str, params object[] args)
        {
            PrintLog(Color.OrangeRed, str, args);
        }

        public void WriteWarning(string str, params object[] args)
        {
            PrintLog(Color.DarkOrange, str, args);
        }

        private void ProcessCompilationResult(CompilationResult result)
        {
            foreach (System.CodeDom.Compiler.CompilerError err in result.CompilerResult.Errors)
            {
                int line = logText.GetLineFromCharIndex(logText.SelectionStart);

                if(!Context.LogErrorPositions.ContainsKey(line))
                    Context.LogErrorPositions.Add(line, new ErrorPosition(err.Line, err.Column));

                if (err.IsWarning)
                    WriteWarning("[{0}:{1}] {2}", err.Line, err.Column, err.ErrorText);
                else
                    WriteError("[{0}:{1}] {2}", err.Line, err.Column, err.ErrorText);
            }

            if (result.MainMethod == null)
                WriteError("Main method not found");
        }

        private async void OnVerify(object sender, EventArgs e)
        {
            ClearLog();

            VerifyButton.Enabled = false;
            RunButton.Enabled = false;
            CompilationResult result = await script.Compile(codeEditor.Text);

            ProcessCompilationResult(result);

            VerifyButton.Enabled = true;
            RunButton.Enabled = true;
        }

        private void OnLogDoubleClick(object sender, EventArgs e)
        {
            int line = logText.GetLineFromCharIndex(logText.SelectionStart);

            if (Context.LogErrorPositions.ContainsKey(line))
            {
                ErrorPosition pos = Context.LogErrorPositions[line];

                codeEditor.Focus();

                if(line < codeEditor.Lines.Count)
                    codeEditor.GotoPosition(codeEditor.Lines[line].Position + pos.Column);
            }
        }

        private void OnNewPressed(object sender, EventArgs e)
        {
            Context.CreateNewDocument();
        }

        private void OnOpen(object sender, EventArgs e)
        {
            Context.OpenDocument();
        }

        private void OnSavePressed(object sender, EventArgs e)
        {
            Context.SaveDocument();
        }

        private async void OnRun(object sender, EventArgs e)
        {
            ClearLog();

            VerifyButton.Enabled = false;
            RunButton.Enabled = false;
            CompilationResult result = await script.Compile(codeEditor.Text);

            ProcessCompilationResult(result);

            if (result.MainMethod != null)
            {
                await Task.Run(() => {
                    try
                    {
                        result.MainMethod.Invoke(null, null);
                    } catch (System.Reflection.TargetInvocationException ex)
                    {
                        WriteError("Exception occured: {0}", ex.InnerException.GetType().Name);
                        WriteError("{0}", ex.InnerException.Message);
                        WriteError("{0}", ex.InnerException.StackTrace);
                    }
                });
            }

            VerifyButton.Enabled = true;
            RunButton.Enabled = true;
        }

        private void OnClose(object sender, FormClosedEventArgs e)
        {
            if (Context.FileName != null)
                Settings.Current.LastFileName = Context.FileName;

            Settings.Save();
        }

        private void OnLoad(object sender, EventArgs e)
        {
            if (File.Exists(Settings.FileName))
                Context.OpenExplicit(Settings.Current.LastFileName);
        }
    }
}
