#include <iostream>
using namespace std;
void reverseArray (int array[] , int size);
void display(int array[], int size) ;


int main()
{ int n;
    cout << "enter num of element" <<endl;
    cin >> n;

int arr[n];
 for(int i=0; i<n; i++){
        cout << "enter  index " << i <<endl;
        cin >> arr[i] ;
    }
    cout << "\n";
display(arr,n);
reverseArray(arr,n);
display(arr,n);



    return 0;
}
void reverseArray (int array[] , int size)
 { // 1 2 3 4  5 ,size 5
    int i=0; // 0 1 2
    int j=size-1;//4 3 2
    while (i<j) //
    {
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp; // 5          1
                       // 5 4     2  1
        i++            // 5 4   3 2  1
        j--;
    }

}
void display(int array[], int size)
{
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}
