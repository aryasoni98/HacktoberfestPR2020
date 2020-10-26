//Sieve of eratosthenes uptil 100 numbers
//Contributed by Toshani
#include <iostream>
#define MAX 100
using namespace std;
int main ()
{
	int isPrime[MAX + 1];
	int n;
	cout<<"\nEnter n:\t";
	cin>>n;
	//initially assuming all integers are prime
	for (int i=2; i<=n; i++)
	{
		isPrime[i]=1;
	    cout<<"\n isPrime[i] \t"<<isPrime[i];
	}
	//mark non-primes<=Max using sieve of eratosthenes
	for (int i=2; i*i<=n; i++)
	{
		//if i is prime, then mark multiples of i as non-prime
		if (isPrime[i]==1)
		{
			for (int j=i; i*j <=n; j++)
			    isPrime[i*j] = 0;
		}
	}
	//count and display primes
	cout<<"\nPrime numbers until "<<MAX<<" are: \n";
	int primes = 0;
	for (int i=2; i<=MAX; i++)
	{
		if (isPrime[i])
		{
			primes++;
			cout<<i<<" , ";
		}
	}
	cout<<"\n";
	cout<<"\nThe number of prime numbers until "<<MAX<<" are: "<<primes<<"\n";
	return 0;
}
