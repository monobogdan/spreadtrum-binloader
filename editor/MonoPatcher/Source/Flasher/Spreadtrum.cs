using System;
using System.Collections.Generic;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MonoPatcher.Flasher
{
    public sealed class SpreadtrumFlasher : Flasher
    {

        public SpreadtrumFlasher(ILogger log) :
            base(log)
        {

        }

        public override void StartCommunication(SerialPort port)
        {
            base.StartCommunication(port);

            DumpSerialPortData(port);
        }

        public override Task FlashRegion(int offset, byte[] data)
        {
            throw new NotImplementedException();
        }
    }
}
