#pragma once
#include <vector>
class Arm
{
public:
	Arm(void);
	~Arm(void);
	virtual double Generate() = 0;
protected:
	int _timesChosen;
	std:: vector <double> _history;
	std:: vector <double> _parameters;
};

