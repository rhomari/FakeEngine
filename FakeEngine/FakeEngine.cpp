// FakeEngine.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "FakeScript.h"

int main()
{
   FakeScript::RunScript();
   std::cout << "Speed is set to "<< FakeScript::speed << " from CSharp script" << std::endl;
    
}


