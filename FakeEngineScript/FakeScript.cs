using System;
using System.Runtime.InteropServices;


namespace FakeEngineScript
{
    public class FakeScript

    {


        [DllImport("__Internal", EntryPoint = "setSpeed")]
        public extern static void setSpeed(float speed);

       
      
       



    }
}
