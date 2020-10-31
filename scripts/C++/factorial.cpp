#include <iostream>

using namespace std;

int main()

{
	long int n,ans=1;
	 cout<<"number till number for factorial";
	 cin>>n;
	 for(int i=1;i<=n;i++)
	 {
	 	ans=ans*i;

	 }
	 
	 cout<<"\n factorial="<<ans;



    
	return 0;
}