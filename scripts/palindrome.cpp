// Check if a number is a palindrome 
//Contributed by Toshani
#include <iostream>
using namespace std;
int main ()
{
	int n, r=0, a, d;
	cout<<"Enter a number\t";
	cin>>n;
	a = n;
	do 
	{
		d = n%10;
		r = r*10 + d;
		n = n/10;
	}while (n!=0);
	if (a == r)
	cout<<"Number is a palindrome";
	else 
	cout<<"Number is not a palindrome";
}
