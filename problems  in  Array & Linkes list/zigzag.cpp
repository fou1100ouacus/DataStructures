#include <iostream>
using namespace std;
void sorting0and1(int arr[], int nn)
	{
		int count = 0;
		for (int i = 0; i < nn; i++) {
        if (arr[i] == 0)  count++;}
		for (int i = 0; i < count; i++)
			arr[i] = 0;
		for (int i = count; i < nn; i++)
			arr[i] = 1;
	}
void BubbleSort(int array[] , int n){
for(int i=0 ;i<n;i++) // i=4
{
   for(int j=i+1;j<n ;j++) // 0    3
    if (array[i] > array[j])
          swap(array[i],array[j] ) ;}
}
void swap(int &x ,int &y) {
    int temp = x;
    x = y;
    y = temp;
}
void ZigZag (int arr[] , int n) {
BubbleSort(arr,n) ;
    for (int i =1;i<n-1;i+=2) {
        swap(arr[i],arr[i+1]);
    }






}
void move0tostart(int arr[],int size) {

    int c=size-1;
int i;
    for(i=size-1;i>=0;i--)
    {
        if(arr[i]!=0)
        {
            arr[c]=arr[i];
            c--;
        }
    }
    for(i=c;i>=0;i--){
        arr[c]=0;
        c--;
    }
    cout<<"After Move all zeros to Start, Array is:";
}
void moveZerostoend(int arr[],int n) {
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

int main()
{
int n;
cin >>n;
int arr[n] ;
for (int i = 0 ;i<n ;i++) {
    cin >> arr[i] ;
}
///moveZerostoend(arr,n);
///move0tostart(arr,n) ;
///sorting0and1(arr,n);
///BubbleSort(arr,n) ;

ZigZag(arr,n) ;
cout << "========="<<endl;
for (int i = 0 ;i<n ;i++) {
    cout <<arr[i] <<endl;
}}
