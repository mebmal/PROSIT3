#pragma once
#include "CLparcours.h"
#include "CLpoint.h"
class CLparcours2D
{
protected:
	int i=0;
	CLpoint listPoints[];
public:
	CLparcours2D();
	CLparcours2D(int);
	void ajouterPoint(CLpoint);
	float calculDistance();


};

