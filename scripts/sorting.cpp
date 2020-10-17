#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[30],n;
cout<<"enter the width of array";
cin>>n;
for(int i=0;i<n;i++)
 cin>>a[i];

sort(a,a+n);
cout<<"\n";	
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
