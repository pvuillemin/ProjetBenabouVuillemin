#include <iostream>
#include <random>
#include "Arm.h"
#include "Exponential.h"

using namespace std;

int main()
{
    Exponential Bras1(3.2);
    cout << Bras1.Generate() << endl;
    return 0;      
	
}