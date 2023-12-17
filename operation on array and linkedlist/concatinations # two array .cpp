#include <iostream>
using namespace std;
int main()
{
// concatination 2 array
cout << "enter size 1 of array1 " <<endl;
int size1; cin>>size1;
int array1[size1] ;
for (int i =0;i<size1 ;i++) {
    cout << "enter element for index "<<i<<endl;
    cin >> array1[i];
}
cout << "enter size 2 of array2 " <<endl;
int size2; cin>>size2;
int array2[size2] ;
for (int i =0;i<size2 ;i++)
{
    cout << "enter element for index "<<i<<endl;
    cin >> array2[i];
}
int size3=size1+size2;
int array3 [ size3 ] ;
for (int i =0 ;i<size1;i++) {
    array3[i]=array1[i];

}
for (int j =0 ;j<size2;j++) {
    array3[j+size1]=array2[j];

}
for (int j =0 ;j<size3;j++) {
cout << array3[j]<< " \t " ;
}



    return 0;
}
