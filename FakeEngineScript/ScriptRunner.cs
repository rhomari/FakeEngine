using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FakeEngineScript
{
    public class ScriptRunner
    {
        public static void RunScript()
        {
            Console.WriteLine("I'am running now...");
            FakeScript.setSpeed(10000);
           
        }
    }
}
