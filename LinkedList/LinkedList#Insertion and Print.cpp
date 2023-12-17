#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;

};

void InSertionFirst (node *&head , int x) ;
void PrintList(node *head) ;
void reverse3pointer(node *&head)
{
node *prev,*current,*next;
prev=NULL;
current=head;
next=current->next;
while( next !=NULL) {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
head=prev;
}
int main()
{  int data;
node  *head;
head = NULL;// empty list

InSertionFirst(head,55);

InSertionFirst(head,35);

InSertionFirst(head,45);

InSertionFirst(head,56);
PrintList(head) ;
reverse3pointer(head);
PrintList(head) ;


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
