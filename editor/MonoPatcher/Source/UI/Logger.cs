using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoPatcher
{
    public interface ILogger
    {
        void WriteLine(string str, params object[] args);
        void WriteError(string str, params object[] args);
        void WriteWarning(string str, params object[] args);
    }
}
