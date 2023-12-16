#include <iostream>
using namespace std;
int BinarySearch(int array[],int low,int high,int x) {
    if (high>=low)
{
      int  mid=(low+high)/2;
    if (x==array[mid]) {
        return mid;
    }
     if (x>array[mid]) {

      return BinarySearch(array, mid+1,high,x) ;
     }
   else {
       return BinarySearch(array, low,mid-1,x) ; }
} }
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
int num;
cout << "Enter  number for researching " <<endl;
cin >>num;
int result= BinarySearch(array , 0 , n-1, num) ;
if (result == -1 ) {
    cout << "the number of searching not found " <<endl;}
else {
cout << "Number is found at index = " << result  << "the  num "<< array[result] <<endl;
}

    return 0;
}
