#include <iostream>
using namespace std;
int main()
{
int size;
cout << "enter array size" <<endl;
cin >> size;
int array[size];
for (int i =0 ;i <size;i++) {
    cin >>array[i];
}
int x=array[0];
for (int i=0;i<size;i++) { // 0 1
    array[i] =array[i+1];
}
 array[size-1] = x;
for (int i =0 ;i <size;i++) {
    cout <<array[i] << "\t";
}
    return 0;
}
