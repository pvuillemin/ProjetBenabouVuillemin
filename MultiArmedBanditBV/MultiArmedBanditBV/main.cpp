#include <iostream>
#include <random>
#include <vector>
#include "Player.h"
#include "Bandit.h"
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

	vector <char> choices;
	choices.push_back('A');
	choices.push_back('B');
	vector <vector<double>> parameters;
	vector <double> parameter1 (1,3) ;
	vector <double> parameter2(2);
	parameter2[0]=0;
	parameter2[1]=1;
	parameters.push_back(parameter1);
	parameters.push_back(parameter2);

	Bandit Bandit1 (2,choices,parameters);
	cout << parameters[0][0] << endl;
	cout << Bandit1.GenerateArm(1) << endl;
	
	Player joueur;
	double x (joueur.ActivateArm(&Bandit1,0));

	cout << x << endl;

	return 0;
	
}