#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter number of element in array " <<endl;
cin >>n;
int array[n];
for(int i=0;i<n;i++) {
cout << "Enter  element" <<endl;
    cin >> array[i];

}

int sum;
cout << "Enter sum "<<endl;
cin >> sum;
for (int i=0;i<n;i++) {
    for (int j=i;j<n;j++)
        if (array[i]+array[j]==sum)
        cout << array[i] << " + " <<array[j] << " = " << sum << " at index "<< i<< " and " <<j<<endl;
}
}




