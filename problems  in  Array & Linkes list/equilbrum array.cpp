#include <iostream>
//Find equilibrium index of an array
using namespace std;
int equilibrium(int arr[] , int n) ;

int main()
{
int n =7;
int arr[n] = { 2 , 5 , 7, 9 , 16 , 12, -2};
cout << equilibrium( arr , 7);


    return 0;
}
int equilibrium(int arr[] , int n) {

int result = -1;

  for(int i=0; i<n; i++){

    int left_sum =0;
    for(int j=0; j<i; j++)
       left_sum += arr[i];
    int right_sum =0;
    for(int j=i+1; j<n; j++)
       right_sum += arr[i];

    if(right_sum == left_sum)
            result = i;

  }

    cout<<"First Point of equilibrium is at index = "<<result;
    return ;


}
