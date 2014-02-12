#include "Player.h"
#include <vector>
using namespace std;

Player::Player()
{
	_numberActions=0;
	_cumulatedRegret=0;
}

double Player::ActivateArm(Bandit* bandit, int n)
{
	double x (bandit->GenerateArm(n));
	_armHistory.push_back(n);
	_numberActions++;
	int k (0);
	double sumEmpiricalMeans (0);
	for (k=0;k<(bandit->GetNumberArms());k++)
	{
			sumEmpiricalMeans+=(bandit->GetTimesChosenArm(k))*(bandit->GetEmpiricalMeanArm(k));
	}
	double a (bandit->GetBestRealMeanArms());
	_cumulatedRegret=_numberActions*a-sumEmpiricalMeans;



	return x;
	
}


Player::~Player(void)
{
}
