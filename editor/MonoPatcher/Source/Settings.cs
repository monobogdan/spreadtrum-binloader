using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;
using System.IO;

namespace MonoPatcher
{
    [Serializable]
    public sealed class Settings
    {
        public const string FileName = "settings.xml";

        public static Settings Current
        {
            get;
            private set;
        }

        private static string filePath = FileName;
        private static XmlSerializer serializer = new XmlSerializer(typeof(Settings));

        public string LastFileName
        {
            get;
            set;
        }

        public static void Load()
        {
            try
            {
                using (FileStream strm = File.OpenRead(filePath))
                    Current = (Settings)serializer.Deserialize(strm);
            }
            catch (IOException e)
            {

            }
        }

        public static void Save()
        {
            using (FileStream strm = File.Create(filePath))
                serializer.Serialize(strm, Current);
        }

        static Settings()
        {
            Load();

            if (Current == null)
            {
                Current = new Settings();
                Save(); // Create if not exists
            }  
        }
    }
}
