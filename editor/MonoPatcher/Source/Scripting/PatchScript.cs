using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using System.CodeDom.Compiler;
using System.Reflection;
using Microsoft.CSharp;
using System.Threading.Tasks;

namespace MonoPatcher.Scripting
{
    public sealed class CompilationResult
    {
        public CompilerResults CompilerResult
        {
            get;
            private set;
        }

        public MethodInfo MainMethod
        {
            get;
            private set;
        }

        public CompilationResult(CompilerResults results, MethodInfo mainMethod)
        {
            CompilerResult = results;
            MainMethod = mainMethod;
        }
    }

    public sealed class PatchScript
    {
        private ILogger logger;
        
        private CSharpCodeProvider codeProvider;
        private CompilerParameters compilerParameters;

        public PatchScript(ILogger logger)
        {
            codeProvider = (CSharpCodeProvider)CodeDomProvider.CreateProvider("CSharp");
            compilerParameters = new CompilerParameters();
            compilerParameters.GenerateInMemory = true;
            compilerParameters.GenerateExecutable = false;
            compilerParameters.IncludeDebugInformation = false;
            compilerParameters.OutputAssembly = "Script";

            compilerParameters.ReferencedAssemblies.Add("System.dll");
            compilerParameters.ReferencedAssemblies.Add(Assembly.GetCallingAssembly().Location);

            this.logger = logger;
        }

        public async Task<CompilationResult> Compile(string source)
        {
            CompilationResult ret = null;
            await Task.Run(() =>
            {
                CompilerResults results = codeProvider.CompileAssemblyFromSource(compilerParameters, source);
                MethodInfo mainMethod = null;

                if (!results.Errors.HasErrors)
                {
                    // Perform type lookup to find our patch
                    Assembly asm = results.CompiledAssembly;
                    Type scriptType = asm.GetType("Script", false, true);

                    if (scriptType != null)
                        mainMethod = scriptType.GetMethod("Run", BindingFlags.Public | BindingFlags.Static);
                    else
                        logger.WriteError("\"Script\" type is not found");
                }

                ret = new CompilationResult(results, mainMethod);
            });

            return ret;
        }
    }
}
