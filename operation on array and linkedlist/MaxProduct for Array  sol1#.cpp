#include <iostream>
using namespace std;
int main()
{

// 3 solution to maximum product
int size;
cin >>size;
int array[size];
for (int i=0 ;i<size;i++) {
        cin >> array[i];
}
int maxProduct=array[0]*array[1] ;
int n1,n2;
for (int i=0 ;i<size-1;i++) {
for (int j=i+1 ;i<size;i++) {
    int res;
 res = array[i]*array[j] ;

if (res>maxProduct) {
    maxProduct=res;
    n1=array[i];
    n2=array[j];
}
}
     cout << " pair of 2 nums is"  << n1 << ","<< n2 << " " <<maxProduct;
}

    return 0;
}
