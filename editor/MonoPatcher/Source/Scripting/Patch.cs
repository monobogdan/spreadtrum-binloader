using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace MonoPatcher.Scripting
{
    public sealed class Patcher
    {
        public static ILogger Log
        {
            get;
            internal set;
        }

        public static void CopyFile(string sourceFile, string destinationFile)
        {
            if (File.Exists(destinationFile))
                File.Delete(destinationFile);

            File.Copy(sourceFile, destinationFile);
        }

        public static unsafe void WriteValue<T>(Stream stream, int offset, T val, bool bigEndian = false) 
            where T : struct
        {
            if (stream == null)
                throw new ArgumentException("Stream can't be null");

            if (!typeof(T).IsPrimitive && bigEndian)
                throw new ArgumentException("Can't swap endianness of non-primitive types. Write structures on per-field basis instead");

            int sz = System.Runtime.InteropServices.Marshal.SizeOf(typeof(T));
            IntPtr mem = System.Runtime.InteropServices.Marshal.AllocHGlobal(sz);
            byte[] data = new byte[sz];
            System.Runtime.InteropServices.Marshal.StructureToPtr(val, mem, true);
            System.Runtime.InteropServices.Marshal.Copy(mem, data, 0, data.Length);
            System.Runtime.InteropServices.Marshal.FreeHGlobal(mem);

            if(bigEndian)
            {
                for(int i = 0; i < data.Length / 2; i++)
                {
                    byte a = data[i];

                    data[i] = data[data.Length - i - 1];
                    data[data.Length - i - 1] = a;
                }
            }

            stream.Seek(offset, SeekOrigin.Begin);
            stream.Write(data, 0, data.Length);
        }

        public static string GetString(byte[] data, int offset)
        {
            char chr;
            StringBuilder ret = new StringBuilder();

            while((chr = (char)data[offset++]) != '\0')
                ret.Append(chr);

            return ret.ToString();
        }

        private static bool CompareBytes(byte[] d1, byte[] d2, int d2Offset, byte[] mask)
        {
            for(int i = 0; i < d1.Length; i++)
            {
                if (d1[i] != d2[d2Offset + i] && mask[i] == 1)
                    return false;
            }

            return true;
        }

        public static int PatternSearch(byte[] data, string pattern, int offset = 0)
        {
            pattern = pattern.Replace(" ", "");

            if (pattern.Length % 2 != 0)
                throw new ArgumentException("Incorrect length pattern");

            byte[] bytePattern = new byte[pattern.Length / 2];
            byte[] byteMask = new byte[bytePattern.Length]; // 1 - Byte in pattern is required, 0 - not required

            for(int i = 0; i < pattern.Length / 2; i++)
            {
                string b = pattern.Substring(i * 2, 2);

                if (b == "??")
                {
                    byteMask[i] = 0;

                    continue;
                }

                byteMask[i] = 1;
                if (!byte.TryParse(b, System.Globalization.NumberStyles.HexNumber, System.Globalization.CultureInfo.InvariantCulture, out bytePattern[i]))
                    throw new ArgumentException("Pattern contains non HEX character");
            }

            for(int i = 0; i < data.Length - bytePattern.Length; i++)
            {
                if (CompareBytes(bytePattern, data, i, byteMask))
                    return i;
            }

            return -1; // Not found
        }

        public static void Patch(Stream stream, int offset, byte[] data)
        {
            stream.Seek(offset, SeekOrigin.Begin);
            stream.Write(data, 0, data.Length);
        }

        public static void Patch(Stream stream, int offset, string fileName)
        {
            using (FileStream fileStream = File.OpenRead(fileName))
            {
                byte[] data = new byte[fileStream.Length];

                fileStream.Read(data, 0, data.Length);
                Patch(stream, offset, data);
            }
        }

        public static void InsertNOP(Stream stream, int offset)
        {
            stream.Seek(offset, SeekOrigin.Begin);
            stream.WriteByte(0x0);
            stream.WriteByte(0x0);
        }

        public static void Append(Stream stream, byte[] data)
        {
            stream.Seek(0, SeekOrigin.End);

            stream.Write(data, 0, data.Length);
        }
        
        public static void HookFunction(Stream stream, int offset, int functionAddress, bool bigEndian = false)
        {
            if (stream == null)
                throw new ArgumentException("Stream can't be null");

            byte[] thunkFunction = new byte[]
            {
                0xB5, 0x07, 0x4B, 0x03, 0x93, 0x01, 0x9B, 0x01, 0x47, 0x98, 0x20, 0x01, 0xBd, 0x0E, 0x46, 0xC0
            };

            stream.Seek(offset, SeekOrigin.Begin);
            stream.Write(thunkFunction, 0, thunkFunction.Length);
            WriteValue<int>(stream, offset + thunkFunction.Length, functionAddress, true);
        }

        public static void HookFunctionCall(Stream stream, int offset, int functionAddress)
        
        {
            stream.Seek(offset, SeekOrigin.Begin);
            
        }
    }
}
