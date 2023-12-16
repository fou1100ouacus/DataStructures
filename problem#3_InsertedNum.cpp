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
int x;
cout << "enter insert num" <<endl;
cin >>x;

int i;
for( i=0 ;i<n;i++) {

if (array[i] > x)
 break;  // position
}
if (i==n)
    array[n]=x;
else
    for (int j=n;j>=i+1;j--)
        array[j]=array[j-1]; // shift
array[i]=x;// insert
for(int i=0;i<n+1;i++) {
cout << array[i]<<  "\t ";
cout <<endl;
}
    return 0;
}
