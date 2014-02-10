#pragma once
#include "Arm.h"
class Exponential :
	public Arm
{
public:
	Exponential (double parameter);
	~Exponential(void);
	double Generate();

private:
    
};

