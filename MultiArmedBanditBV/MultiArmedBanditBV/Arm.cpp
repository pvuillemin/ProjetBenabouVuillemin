#include "Arm.h"


Arm::Arm(void)
{
	_timesChosen = 0;
}

double Arm:: GetRealMean()
{
	return _mean;
}

double Arm:: GetEmpiricalMean()
{
	double Sum (0);
	int n (0);
	for (n=0; n < _timesChosen; n++)
	{
		Sum+=_history[n];
	}
	return (Sum/_timesChosen);
}

int Arm:: GetTimesChosen()
{
	return _timesChosen;
}

Arm::~Arm(void)
{
}
