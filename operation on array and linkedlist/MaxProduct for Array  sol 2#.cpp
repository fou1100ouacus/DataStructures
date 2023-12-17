#include <iostream>
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
void printArray(int array[] , int n)
{
for (int k=0 ;k<n ;k++) {
    cout << array[k] << "\t";
}
cout <<endl;
}
int main()
{
// sol 2
// 3 solution to maximum product
int size;
cout << "enter array size" ;
cin >>size;
int array[size];
for (int i=0 ;i<size;i++) {
        cin >> array[i];
}
//BubbleSort(array,size);
SelectionSort(array,size);
printArray(array,size);

cout << "array 2 maximum element is " << array[size-1]  << " , " << array[size-2] << "and the product is  " << array[size-1] *array[size-2];


    return 0;
}
