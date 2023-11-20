#include "CLparcours2D.h"

CLparcours2D::CLparcours2D()
{
	this->listPoints[1];
}

CLparcours2D::CLparcours2D(int nb)
{
	this->listPoints[nb];
}

void CLparcours2D::ajouterPoint(CLpoint p)
{
	listPoints[i] = p;
	i++;
}

float CLparcours2D::calculDistance()
{
}
