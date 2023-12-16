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
int m;
cout << "Enter number of element" <<endl;
cin >>m;
int array2[m];
for(int i=0;i<m;i++) {
cout << "Enter  element" <<endl;
    cin >> array2[i];
}

int min;
if (n>m)
{
min=m;
}
else{
min=n;}
int arrayNew[min];
int k=0;
int i,j;
for( i=0 ;i<n;i++) {
for (j=0;j<m;j++)
if (array[i]==array2[j])
    break;
 if (j!=m)
{
    arrayNew[k]=array[i];
    k++;
 }
}
 cout << "intersection between 2 arraies is  " ;
 for(int g=0;g<k;g++)
    {
      cout << arrayNew[g]<<endl;
    }

    return 0;
}
