#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter number of element" <<endl;
cin >>n;
int array[n];
for(int i=0;i<n;i++) {
cout << "Enter  element" <<endl;
    cin >> array[i];
}
int k=0 ;
int i;
int F_array[100];
for( i=0;i<n;i++)
{
for(int j=1;j<=array[i];j++)
if(array[i]%j==0) {
F_array[k]=j;
k++; }
}
 for(int r=0;r<k;r++) {
cout << F_array[r] << "\t" ;
 }
}


