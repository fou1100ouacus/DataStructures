#include <iostream>
using namespace std;
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
for(int i=0;i<n;i++) {
cout << array[i]<< "\t";
cout <<endl;

}
int start;
int end1;
start=0;
end1=n-1;
int arr[n];
for(int i=0;i<n;i++) {
        if (array[i]%2==0)
        {
            arr[start]=array[i] ;
            start++;
        }
        else {
            arr[end1]=array[i];
            end1--;
        }
}

for(int i=0;i<n;i++) {
cout << arr[i]<<  "\t ";
cout <<endl;
}
    return 0;
}
