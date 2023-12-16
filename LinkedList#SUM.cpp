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

InSertionFirst(head,55);

InSertionFirst(head,35);

InSertionFirst(head,45);

InSertionFirst(head,56);
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
{
int sum=0;
for(node*runner=head; runner!=NULL;runner=runner->next)
sum=sum+runner->data;
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
