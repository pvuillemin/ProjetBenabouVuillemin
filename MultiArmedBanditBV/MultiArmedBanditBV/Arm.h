#pragma once
class Arm
{
public:
	Arm(void);
	~Arm(void);
	virtual double Generate() = 0;
private:
	int _nombreTirages;

};

