#pragma once
#include <vector>
#include "Arm.h"

class Bandit
{
public:
	Bandit(int numberArms, std::vector<char> choices, std::vector<std::vector<double>> parameters);
	// The bandit is defined by his number of arms, the vector of the types of each arm: A: Exponential, B:UniformReal , and by the vecto of the parameters where each parameter is a vector
	double GenerateArm(int n);//Genere un nombre aléatoire a partir de la distribution du bras numéro n
	double GetBestRealMeanArms();// Donne la meilleure moyenne des bras
	double GetEmpiricalMeanArm(int n);//Donne la moyenne empirique du bras numéro n
	int GetTimesChosenArm(int n);
	int GetNumberArms();
	~Bandit(void);

protected:
	std::vector<Arm*> _arms;
	std::vector<char> _choices;
	std::vector<std::vector<double>> _parameters;
	int _numberArms;

	friend double Generate();
};

