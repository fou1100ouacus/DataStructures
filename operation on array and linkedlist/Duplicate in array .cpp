#include <iostream>
using namespace std;
void duplicateelement(int arr[], int num)
{
int i, j;
cout<<"Repeating elements  " <<endl;
for(i = 0;i < num;i++)
{
  for(j = i+1;j < num;j++)
  {
    if(arr[i] == arr[j])
    {
     cout << arr[j] << " ";
    }
  }
}
}
int main()
{
int no;
cin >> no;
int ele[no];
int i;
cout<<"\n enter elements";
for(i = 0; i < no; i++)
{
cin >> ele[i];
}
duplicateelement(ele,no);
return 0;
}

