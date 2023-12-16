#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Employee {
    string name;
    int ip;
    int salary;
};
int main()
{
   Employee a[7] ;
for(int i=1;i<4;i++)
    {
cout << "Enter  name "<< i <<endl;
    getline(cin,a[i].name);

    cout << "Enter  ip  of student "<< i <<endl;
//    getldine(cin,a[i].age);
cin >> a[i].ip;
    cout << "Enter salary of student "<< i <<endl;
cin>> a[i].salary;
cin.ignore();
    }

//int largest= a[i].salary;
int largest;
 for (int j=0;j<4;j++)
{
    largest= a[j].salary;

if (a[j].salary>largest)
largest=a[j].salary;
}
cout << "the larest salary " <<largest<<endl;
    return 0;

}
