#pragma once
#include "arm.h"
class UniformReal :
	public Arm
{
public:
	UniformReal(double parameter1, double parameter2);
	~UniformReal(void);
	double Generate();

private:

};

