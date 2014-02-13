#pragma once
#include "Bandit.h"
class Player
{
public:
	Player();
	~Player(void);
	double ActivateArm(Bandit* bandit, int n);

private:
	int _numberActions;
	double _cumulatedRegret;
	Bandit* _bandit;
	std::vector <double> _armHistory;

};

