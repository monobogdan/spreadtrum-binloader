using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Reflection;

namespace MonoPatcher.UI
{
    public sealed class AutoCompleteManager
    {
        public List<Assembly> Assemblies
        {
            get;
            private set;
        }

        public Assembly ScriptAssembly
        {
            get;
            set;
        }

        public string AutoCompleteKeywords
        {
            get;
            private set;
        }
        
        public AutoCompleteManager()
        {
            // Add some generic assemblies
            Assemblies = new List<Assembly>();
            Assemblies.Add(Assembly.GetCallingAssembly());

            BuildAutoCompletionCache();
        }

        private void BuildCacheForAssembly(StringBuilder builder, Assembly assembly)
        {
            foreach (Type t in assembly.GetTypes())
            {
                if (t.IsPublic)
                {
                    builder.Append(t.Name);
                    builder.Append(' ');
                }

                foreach (MethodInfo method in t.GetMethods())
                {
                    if (method.Name.Contains("get_") || method.Name.Contains("set_"))
                        continue; // Skip getters and setters

                    builder.Append(method.Name);
                    builder.Append(' ');
                }
            }
        }

        public void BuildAutoCompletionCache()
        {
            StringBuilder cache = new StringBuilder(32768);

            foreach(Assembly assembly in Assemblies)
            {
                BuildCacheForAssembly(cache, assembly);
            }

            if (ScriptAssembly != null)
                BuildCacheForAssembly(cache, ScriptAssembly);

            AutoCompleteKeywords = cache.ToString();
        }
    }
}
