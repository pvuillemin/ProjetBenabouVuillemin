// normal_distribution
#include <iostream>
#include <random>
#include<string>
using namespace std;

int main()
{
 
  mt19937_64 generator;
  normal_distribution<double> distribution(5.0,2.0);
  double sum=0;
  for (int i = 1; i<100;i++){
	double number = distribution(generator);
	sum=number+sum;
	
  }
  cout << sum/100.0 << "\n";
  return 0;
}