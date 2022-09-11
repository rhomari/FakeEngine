#include "FakeScript.h"
#include "Bind.h"
#include <iostream>



float FakeScript::speed = 0.0;


void FakeScript::setSpeed(float new_speed) {
	 FakeScript::speed = new_speed;
 }
 MonoDomain* monoDomain;
 MonoAssembly* monoAssembly;
 MonoImage* monoImage;
 void FakeScript::RunScript()
 {
	
	 std::cout << "start" << std::endl;
	 monoDomain = mono_jit_init("FakeEngineScript");
	 if (!monoDomain) {
		 return;
		
	 }
	 monoAssembly = mono_domain_assembly_open(monoDomain, "FakeEngineScript.dll");
	 if (!monoAssembly) {
		 
		 return;
	 }
	 std::cout << "we got assembly" << std::endl;
	 monoImage = mono_assembly_get_image(monoAssembly);
	 
	
	 if (!monoImage) {
		 return;
	 }
	 std::cout << "we got image" << std::endl;
	 
	 MonoClass* monoClass = mono_class_from_name(monoImage, "FakeEngineScript", "ScriptRunner");
	 if (!monoClass) {
		 return;
	 }
	 std::cout << "we got class" << std::endl;
	 MonoMethodDesc*  monoMethodDesc = mono_method_desc_new(".ScriptRunner:RunScript()", false);
	 if (!monoMethodDesc) {
		 return;
	 }
	 std::cout << "we got method" << std::endl;
	 MonoMethod* monoMethod = mono_method_desc_search_in_class(monoMethodDesc, monoClass);
	 if (!monoMethod) {
		 return;
	 }

	 std::cout << "Runscript found" << std::endl;
	 MonoObject* monoObject = nullptr;
	 
	 mono_runtime_invoke(monoMethod, nullptr, nullptr, &monoObject);
	
	
 }
 FakeScript::~FakeScript() 
 {
	 if (monoDomain) {
		 mono_jit_cleanup(monoDomain);
	 }
 }
