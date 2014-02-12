#include "UniformReal.h"

#include <random>
#include <vector>
using namespace std;

UniformReal::UniformReal(double parameter1, double parameter2)
{
	_mean=(parameter1+parameter2)/2;
	_parameter.push_back(parameter1);
	_parameter.push_back(parameter2);
	
}

double UniformReal::Generate()
{
    mt19937_64 generator;
    uniform_real_distribution<double> distribution(_parameter[0],_parameter[1]);
    double number  (distribution(generator));
	_timesChosen++;
	_history.push_back(number);
    return number;
}

UniformReal::~UniformReal(void)
{
}
