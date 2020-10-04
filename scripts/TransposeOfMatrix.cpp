#include <bits/stdc++.h>
using namespace std;

const int N = 100;

int main(){

//The number of columns and rows should be less than 100.
    int a[N][N],transpose[N][N];
	int clms,rws;
	int i,j;
	cout<<"Enter the number of Columns: ";
	cin>>clms;
	cout<<"Enter the number of Rows: ";
	cin>>rws;
//Storing the elements in a matrix.
    cout<<"\nEnter the elements now -> \n";
    for(i=0;i<rws;i++){
        for (j=0; j<clms;j++) {
         cout << "a["<<i+1<<"]["<<j+1<<"]: ";
         cin >> a[i][j];
        }
    }
//Printing the given Matrix.
    cout << "\nThe Given Matrix: " << endl;
    for (int i=0;i<rws;i++) {
      for (int j=0;j<clms;j++) {
         cout << " " << a[i][j];
         if (j == clms - 1)
            cout << endl << endl;
       }
    }
// Computing transpose of the Matrix.
   for (int i=0;i<rws;i++)
      for (int j=0;j<clms;j++) {
         transpose[j][i] = a[i][j];
      }

   // Printing the transpose of the Matrix.
   cout << "\nTranspose of the Matrix: " << endl;
   for (int i=0;i<clms;i++)
      for (int j=0;j<rws;j++) {
         cout << " " << transpose[i][j];
         if (j == rws - 1)
            cout << endl << endl;
      }

	return 0;
}
