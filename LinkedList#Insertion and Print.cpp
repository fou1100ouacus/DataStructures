#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;

};
void InSertionFirst (node *&head , int x) ;
void PrintList(node *head) ;

int main()
{  int data;
node  *head;
head = NULL;// empty list
PrintList(head) ;

InSertionFirst(head,55);
PrintList(head) ;

InSertionFirst(head,35);
PrintList(head) ;

InSertionFirst(head,45);
PrintList(head) ;

InSertionFirst(head,56);
PrintList(head) ;

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
   cout <<runner->data <<"/t";
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
