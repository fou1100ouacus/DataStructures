#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Student {

    string name;
    int age;
    float mark;
};
int main()
{
   Student a[10] ;
for(int i=1;i<3;i++) {
cout << "Enter  name "<< i <<endl;
    getline(cin,a[i].name);

    cout << "Enter  age  of student "<< i <<endl;
//    getline(cin,a[i].age);
cin >> a[i].age;
    cout << "Enter mark of student "<< i <<endl;
cin>> a[i].mark;
cin.ignore();
} for (int j=1 ;j<3;j++) {
    cout <<"the name of student   is  " << j << " " <<a[j].name<<endl;
    cout <<"the age  of student    is  " << j << " " <<a[j].age<<endl;
    cout <<"the mark of student   is  " << j << " " <<a[j].mark<<endl;


}




    return 0;
}
