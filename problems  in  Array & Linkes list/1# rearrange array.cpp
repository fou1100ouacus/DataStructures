#include <iostream>

using namespace std;
//Rearrange an array with alternate high and low elements
//--Given an integer array, rearrange it such that every second element becomes greater than
// its left and right elements. Assume no duplicate elements are present in the array.
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void reArrange(int arr[] , int n) {
for (int i =1;i<n;i+=2)
{
    if(arr[i]<arr[i-1]) {
        swap (arr[i] ,arr[i-1]);
    }
    if (i+1<n&&arr[i+1]>arr[i]){
        swap(arr[i],arr[i+1]) ;
    }

}

}

int main()
{ int n=5;
 int arr[n] = { 9, 6, 8, 3, 7 };

    reArrange(arr, n);


    for (int i = 0; i < n; i++) {

cout << arr[i] << "\t" ;    }



    return 0;
}
/////////////////////////
#include <iostream>
using namespace std;
void moveZeros(int arr[],int n) {
int left =0;
int right=0;
while(right < n) {
    if (arr[right]== 0) {
        right ++;
    }
    else {
        swap(arr[right] , arr[left]);
        left++;
        right++;
    }
}
}
void moveZEROtofront(int arr[],int n) {
int count=0;
for(int i=0;i<n;i++) {
    if (arr[i]==0)
 {
     count++;
 }

 }
for(int i=0;i<count;i++) {
    if (arr[i]==0)
 arr[i]=0;}

 for(int i=0;i<count;i++) {
    if (arr[i]==0)
 arr[i]=1;}

 }
int main()
{
int n;
cin >>n;
int arr[n] ;
for (int i = 0 ;i<n ;i++) {
    cin >> arr[i] ;
}
//moveZeros (arr,n) ;
//
//for (int i = 0 ;i<n ;i++) {
//    cout <<arr[i] <<endl;
//}
 moveZEROtofront(arr,n) ;

for (int i = 0 ;i<n ;i++) {
    cout <<arr[i] <<endl;
}
    return 0;}
