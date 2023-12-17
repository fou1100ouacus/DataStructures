#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};
void InSertionLast(node *&head , int y) ;
void InSertionFirst (node *&head , int x) ;
void PrintList(node *head) ;
void DeleteFirst (node *&head) ;
void add_before(node *&head,int target, int z) ;

int main()
{  int data;
node  *head;
head = NULL;//1-  empty list
add_before(head, 7, 3) ;//
InSertionFirst (head , 5) ;
add_before(head, 5, 3) ; // one node with target
PrintList(head) ; //
add_before(head, 4, 3) ; // no target
PrintList(head) ;
add_before(head, 64, 3) ;
PrintList(head) ;


    return 0;
}
void add_before(node *&head,int target, int z)
 {

// 3 conditions
if (head==NULL) {
    cout << "Empty list"<<endl ;
}
// only one node
else if (head->data==target) {
        InSertionFirst (head , z) ;
}
else{
    node *runner=head;
    while (runner!=NULL && runner->next!=NULL && runner->next->data!=target) {
        runner=runner->next;
    }
    if (runner==NULL) {
        cout << " target not found" ;
    }
    else {


        node *newNode= new node () ;
        newNode->data=z;
        newNode->next=runner->next;
        runner->next=newNode;
    }
}

}
void DeleteFirst (node *&head)
 {
if (head==NULL) {
    cout << "Empty list" <<endl;
}else {
    head=head->next;
}


}

void InSertionLast(node *&head , int y)
{

node *L;
L=new node();
L->data=y;
L->next=NULL;
if (head== NULL)
{
    head=L;
}
else
{
    node *runner;
    runner=head;
    while(runner->next!=NULL) {
        runner=runner->next;
    }
    runner->next=L;
}

}

void PrintList(node *head)
 {
if (head== NULL)
{
    cout << "EMPTY LIST" <<endl;
}
else {
        cout << "[" ;
  node* runner=head;
while(runner!=NULL) {
   cout <<runner->data <<"\t";
   runner=runner->next;
}         cout << "]" ;

} cout << endl;

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
