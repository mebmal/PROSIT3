#include "CLpoint.h"

CLpoint::CLpoint()
{
	this->setx(0);
	this->sety(0);
}

CLpoint::CLpoint(float x, float y)
{
	this->setx(x);
	this->sety(y);
}

float CLpoint::getx()
{
	return this->x;
}

float CLpoint::gety()
{
	return this->y;
}

void CLpoint::setx(float x)
{
	this->x = x;
}

void CLpoint::sety(float y)
{
	this->y = y;
}
