#include "Bind.h"
#include "FakeScript.h"
#include <iostream>

	extern "C" _declspec(dllexport) void setSpeed(float speed) {
		FakeScript::setSpeed(speed);
	}
