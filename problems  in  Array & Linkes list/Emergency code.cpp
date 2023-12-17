#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};

struct node* newNode(int data)
{
///   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
node *newNode=new node();
    newNode->data = data;
    newNode->next = NULL;
///    return newNode;
}
void InSertionLast(node *&head , int y) ;
void InSertionFirst (node *&head , int x) ;
void PrintList(node *head) ;
void DeleteFirst (node *&head) ;
void add_before(node *&head,int target, int z) ;
void deleteLast (node *&head) ;
void deleteNode (node *&head , int target) ;
void create_dynamic_list (node *&head ) ;
void insert_with_sort(node *&head, node *newNode ) ;

int main()
{  int data;
node  *head;
head = NULL;

node *head2=NULL;
create_dynamic_list (head );

insert_with_sort(head, newNode(5)) ;
insert_with_sort(head, newNode(7)) ;
insert_with_sort(head, newNode(10)) ;

PrintList(head) ;




    return 0;
}
void insert_with_sort(node *&head,  node* newNode)
{
///node *newNode;
if (head==NULL||head->data>=newNode->data) {
newNode->next=head;
head=newNode;
}
else {

    node *runner=head;
    while ( runner->next !=NULL&&runner->next->data <  newNode->data) {
        runner=runner->next;
    }
newNode->next=runner->next;
runner->next=newNode;

}

}


void create_dynamic_list (node *&head  )
{
    int n;
    cout << "Enter number of nodes  "<<endl;
    cin >>n;
for (int i =0 ;i<n;i++) {
        int v;
cout << "Enter value for node  # " <<i+1<<endl;
        cin >>v;
    InSertionLast(head, v) ;

}
}
void deleteNode (node *&head , int target)
{
if (head==NULL) {
    cout << "empty list" <<endl;
}
else if (head->data==target) {DeleteFirst(head);}

else {
    node *runner =head;
    while (runner->next!=NULL &&runner->next->data!=target) {
        runner=runner->next;
    }
    node *p=runner->next;
    runner->next=runner->next->next;
    delete p;
}

}
void deleteLast (node *&head)
{
if (head==NULL) {
    cout << "empty list" <<endl;
}
else if (head->next==NULL) {DeleteFirst(head);}

else {
    node *runner =head;
    while (runner->next->next!=NULL) {
        runner=runner->next;
    }
    node *p=runner->next;
    runner->next=NULL;
    delete p;
}

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
