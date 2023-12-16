#include <iostream>
#include<algorithm>
using namespace std;
void BubbleSort(int array[] , int n){
for(int i=n-1 ;i>=0;i--) // i=4
{
   for(int j=0;j<i-1 ;j++) // 0    3
    if (array[j] > array[j+1])
          swap(array[j],array[j+1] ) ;}
}
void swap(int &x ,int &y) {
    int temp = x;
    x = y;
    y = temp;
}
void printArray(int array[] , int n)
{
for (int k=0 ;k<n ;k++) {
    cout << array[k] << "\t";
}

}
int main()
{
int n;
cout << "Enter number of element" <<endl;
cin >>n;
int array[n];
for(int i=0;i<n;i++){
cout << "Enter  element" <<endl;
    cin >> array[i];}
   printArray(array,n)  ;
   BubbleSort(array,n);
   cout <<endl;
   printArray(array,n) ;

}
