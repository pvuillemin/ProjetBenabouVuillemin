#include "Exponential.h"
#include <random>
using namespace std;

Exponential::Exponential(double parameter)
{
	_parameter = parameter;
}


Exponential::~Exponential(void)
{
}

double Exponential::Generate()
{
    mt19937_64 generator;
    exponential_distribution<double> distribution(_parameter);
    double number  (distribution(generator));
    return number;
}
