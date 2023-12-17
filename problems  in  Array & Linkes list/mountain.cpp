#include <iostream>

using namespace std;
 int mountain(int arr[] , int n) {
   int ans=0;
for (int i =1 ;i<n;)  {
    if (arr[i]>arr[i-1] && arr[i]>arr[i+1] ) { //
 int count=1;
 int j=i;
    while (j>0) {
    if (arr[j]>arr[j-1])
            count++;
            j--;}
    while (i<n-1 && arr[i] >arr[i+1]) {
            i++;
            count++;
                }
                ans=max(count,ans) ;
            }
            else {
                i++;
            }
return ans;}}

int main()
{


	int arr[10] ={2,1,5,4,6,8,2,1,4,8};

mountain(arr,10);
}
