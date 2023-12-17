#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;

};
void InSertionFirst (node *&head , int x) ;
void PrintList(node *head) ;
int SumList(node*head) ;

int main()
{  int data;
node  *head;
head = NULL;// empty list

InSertionFirst(head,5);

InSertionFirst(head,3);

InSertionFirst(head,4);

InSertionFirst(head,6);
PrintList(head) ;
cout <<SumList(head);

head= new node();
head->data=20;
head->next=NULL;

    return 0;
}
void PrintList(node *head)
 {
if (head== NULL)
{
    cout << "EMPTY LIST" <<endl;
}
else {
  node* runner=head;
while(runner!=NULL) {
   cout <<runner->data <<"\t";
   runner=runner->next;
} } cout << endl;

}

int SumList(node*head)
{ node *runner;
int sum=0;
int counter=0;
for(runner=head; runner!=NULL;runner=runner->next) {
counter++;
sum+=runner->data;
cout << "sum after node number  " << counter << " = "<<sum <<endl;
}
return sum;
}
void InSertionFirst (node *&head , int x)
{

node *F;
F=new node();
F->data=x;
F->next=NULL;
if (head== NULL)
{
    head=F;
}
else
{
    F->next=head;
    head=F;
}

}
