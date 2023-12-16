#include <iostream>
#include<algorithm>
using namespace std;
void SelectionSort(int array[] , int n)
{   int minIndex ;
for(int i=0 ;i<n-1;i++)
{
        minIndex=i;
        for(int j=i+1;j<n ;j++)
        {
            if (array[j] < array[minIndex])
            { minIndex=j;

            }

        }                   swap(array[minIndex] ,array[i] ) ;

}
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
   SelectionSort(array,n);
   printArray(array,n) ;

}
