#include "UniformReal.h"

#include <random>
#include <vector>
using namespace std;

UniformReal::UniformReal(double parameter1, double parameter2)
{
	_parameters.push_back(parameter1);
	_parameters.push_back(parameter2);
	
}

double UniformReal::Generate()
{
    mt19937_64 generator;
    uniform_real_distribution<double> distribution(_parameters[0],_parameters[1]);
    double number  (distribution(generator));
	_timesChosen++;
	_history.push_back(number);
    return number;
}

UniformReal::~UniformReal(void)
{
}
