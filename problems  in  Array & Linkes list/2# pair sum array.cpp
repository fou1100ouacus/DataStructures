#include <iostream>

using namespace std;
//Find a pair with the given sum in an array
 int pairSum(int arr[] , int n, int sum ) ;

int main()
{

int n =7;
int arr[n] = { 2,5, 7, 9 , 16 , 12, -2};
 cout <<pairSum(arr , 7, 7) ;


    return 0;
}
 int pairSum(int arr[] , int n ,int sum)

 {
int i,j;

 for ( i=0 ;i<n-1;i++) {


    for (j=i+1;j<n;j++) {

        if (arr[i]+arr[j]==sum)
            cout << arr[i] << "  " << arr[j] << "  " << sum <<endl;


    }
 }

 }
