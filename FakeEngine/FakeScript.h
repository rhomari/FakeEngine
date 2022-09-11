#pragma once
#include <mono/jit/jit.h>
#include <mono/metadata/assembly.h>
#include <mono/metadata/debug-helpers.h>



	class FakeScript {
	private:


	public:
		static void RunScript();
		~FakeScript();
		static void setSpeed(float);
		static float speed;


	};

