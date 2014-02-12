#include "Bandit.h"
#include <iostream>
#include <random>
#include <vector>
#include "Exponential.h"
#include "UniformReal.h"
using namespace std;


Bandit::Bandit(int numberArms, vector<char> choices, vector<vector<double>> parameters)
{
	int n(0);
	for (n=0; n < numberArms; n++)
	{
		switch(choices[n])
		{
		case 'A':
			{
			Exponential* arm (0);
			arm= new Exponential (parameters[n][0]);
			_arms.push_back(arm);
			break;
			}
			

		case 'B':
			{
			UniformReal* arm1 (0);
			arm1= new UniformReal (parameters[n][0],parameters[n][1]);
			_arms.push_back(arm1);
			break;
			}
		}
	}
}

double Bandit:: GenerateArm(int n)
{
	Arm* arm (_arms[n]);
	return arm->Generate();
}

double Bandit:: GetBestRealMeanArms()
{
	double bestMean (0);
	int n (0);

for (n=0; n < _numberArms; n++)//Création du vecteurs des vraies moyennes des bras
	 {
		 if (bestMean<(_arms[n]->GetRealMean()))
		 {
			 bestMean=_arms[n]->GetRealMean();
		 }
	 } 
return bestMean;

}

double Bandit:: GetEmpiricalMeanArm(int n)
{
	return (_arms[n]->GetEmpiricalMean());
}

Bandit::~Bandit(void)
{
}

int Bandit:: GetNumberArms()
{
	return _numberArms;
}

int Bandit:: GetTimesChosenArm(int n)
{
	return _arms[n]->GetTimesChosen();
}
