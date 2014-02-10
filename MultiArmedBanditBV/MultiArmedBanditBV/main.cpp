#include <iostream>
#include <random>
#include "Arm.h"
#include "Exponential.h"
#include "UniformReal.h"

using namespace std;

int main()
{
    Exponential Bras1(3.2);
    cout << Bras1.Generate() << endl;
    

	UniformReal Bras2(1.1,2.1);
	cout << Bras2.Generate() << endl;

	return 0;
	
}