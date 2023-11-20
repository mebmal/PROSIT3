#include "CLpoint3D.h"

CLpoint3D::CLpoint3D()
{
	this->setx(0);
	this->sety(0);
	this->setz(0);
}

CLpoint3D::CLpoint3D(float x, float y, float z)  : CLpoint(x, y)
{
	this->z = z;
}

void CLpoint3D::setz(float z)
{
	this->z = z;
}
