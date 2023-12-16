#include <iostream>
using namespace std;
int fun(int *pointer) {

*pointer=*pointer+1;

return *pointer;

}
int main()
{
int val;
val=3;
int *ptr;
ptr=&val;
cout <<ptr <<endl; // address of  val
cout << val<<endl; // 3
cout << *ptr<<endl; // value
cout << &val<<endl; // same address
*ptr=55;
cout << val<<endl; // 55
cout <<*ptr<<endl;//55
int arr[5]={33,44,22,66,77};
   // int *ptr;
    ptr=arr; // ptr=*arr[0];
for (int i =0 ;i<5; i++)
{
    cout <<arr+i << " "; // address
} cout << "============" <<endl;
for (int i =0 ;i<5; i++)
{
    cout << *(arr+i) << " "; // values
} cout << "============" <<endl;

cout << "============" <<endl;
for (int i =0 ;i<5; i++)
{
    cout <<*(ptr+i) << " "; // values
}cout << "============" <<endl;

for (int i =0 ;i<5; i++)
{
    cout << (ptr+i) << " "; // address
}
cout << "============" <<endl;

int x;
x=4;
fun(&x);
cout <<(x)<<endl;
//5
cout << "============" <<endl;

cout <<fun(&x)<<endl;//6
cout << "============" <<endl;
cout <<fun(&x)<<endl;//7

cout <<(x)<<endl;//7
cout << "============" <<endl;
cout <<fun(&x)<<endl;//8

cout <<(x)<<endl;//8

    return 0;
}

