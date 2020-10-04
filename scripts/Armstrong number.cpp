//Program to check if a number is Armstrong number or not.

#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,r,sum=0,temp;
cout<<"Enter the Number=  ";
cin>>n;
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
cout<<"The number given is an Armstrong Number."<<"\n";
else
cout<<"The number given is NOT Armstrong Number."<<"\n";
return 0;
}
