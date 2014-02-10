#include "Exponential.h"
#include <random>
#include <vector>
using namespace std;

Exponential::Exponential(double parameter)
{
	
	_parameters.push_back(parameter);
}


Exponential::~Exponential(void)
{
}

double Exponential::Generate()
{
    mt19937_64 generator;
    exponential_distribution<double> distribution(_parameters[0]);
    double number  (distribution(generator));
	_timesChosen++;
	_history.push_back(number);
    return number;
}
