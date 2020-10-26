//Contributed by Toshani
//Function overloading
#include <iostream>
#include <math.h>
using namespace std;

//two functions with same name but different types of arguements
double power (double n1, int p1);
int power (int n2, int p2);

int main ()
{
	double n,p,res2; 
	double res1;
	cout<<"Enter number and the exponent for which you want to calculate\n";
	cin>>n>>p;
	res1 = power(n,p);
	res2 = power(n,p);
	cout<<"\nResults for the calculations are:\n";
	cout<<"Result 1 - "<<res1;
	cout<<"\nResult 2 - "<<res2;
	return 0;
}

double power (double n1, int p1=2)
{
	double ans;
	ans = pow(n1,p1);
	return ans;
}

int power (int n2, int p2=2)
{
	double ans=1;
	for (int i=1; i<=p2; i++)
	{
		ans = n2*ans;
	}
	return ans;
}