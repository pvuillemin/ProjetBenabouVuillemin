#pragma once
#include <vector>
class Arm
{
public:
	Arm(void);
	~Arm(void);
	virtual double Generate() = 0;
	double GetRealMean();
	double GetEmpiricalMean();
	int GetTimesChosen();
protected:
	int _timesChosen;
	std:: vector <double> _history;
	std:: vector <double> _parameter;
	double _mean;
};

