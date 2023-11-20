#pragma once
#include "CLpoint.h"
class CLpoint3D : public CLpoint
{
private:
	float z;
public:
	CLpoint3D();
	CLpoint3D(float, float, float);
	void setz(float);
};

