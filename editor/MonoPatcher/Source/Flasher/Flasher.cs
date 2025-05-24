using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.IO.Ports;
using System.Threading.Tasks;

namespace MonoPatcher.Flasher
{
    public abstract class Flasher
    {
        protected ILogger Log
        {
            get;
            private set;
        }

        protected SerialPort Port
        {
            get;
            private set;
        }

        public Flasher(ILogger log)
        {
            Log = log;
        }

        protected void DumpSerialPortData(SerialPort port)
        {
            Port = port;

            Log.WriteLine("Serial port configuration: Baudrate {0}, Parity {1}, DTR {2}", port.BaudRate, port.Parity.ToString(), port.DtrEnable);
        }

        public virtual void StartCommunication(SerialPort port)
        {
            if (port == null)
                throw new ArgumentException("Serial port can't be null");

            Port = port;
            Log.WriteLine("Request communcation on COM port " + port.PortName);
        }

        public abstract Task FlashRegion(int offset, byte[] data);
    }
}
