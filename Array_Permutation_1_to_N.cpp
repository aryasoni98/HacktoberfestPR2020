#include<bits/stdc++.h>
using namespace std;

bool permu(int a[],int n){
  set<int> hash;
  int max_elem=0;
  for(int i=0;i<n;i++){
    hash.insert(a[i]);
    max_elem=max(max_elem,a[i]);
  }
  if(max_elem!=n)
    return false;
  if(hash.size()==n)
    return true;
  return false;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  if(permu(arr,n)){
    cout<<"Yes"<<"\n";
  }
  else{
    cout<<"No"<<"\n";
  }
  return 0;
}
