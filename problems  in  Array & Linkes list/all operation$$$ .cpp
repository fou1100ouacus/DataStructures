#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};

struct node* newNode(int data)
{

    node *newNode=new node();
    newNode->data = data;
    newNode->next = NULL;
///    return newNode;
} ;

void maxSub_list (node *head, int target) ;

int  pair_node_sum (node *head, int sum) ;

void rotateTOleftbyONE(node *&head) ;
void merge(Node *a, Node* &b) ;
void MovetoFront(node *&head) ;
void printList(node* head) ;
void reverse3pointer(node *&head) ;
void merge_alternate_2list(node *&head1, node *&head2) ;
int merge2list (node *&head1,node *&head2, node *&head3sort) ;
void intersection2list(node *&head1,node*&head2) ;
void reverseList(node *head1 ,node *&head2) ;
void maxSub_list (node *head, int target) ;
void duplicate(node *head) ;
void InSertionLast(node *&head , int y) ;
void InSertionFirst (node *&head , int x) ;
void PrintList(node *head) ;
void DeleteFirst (node *&head) ;
void add_before(node *&head,int target, int z) ;
void deleteLast (node *&head) ;
void deleteNode (node *&head , int target) ;
void create_dynamic_list (node *&head ) ;
void insert_with_sort(node *&head, node *newNode ) ;
void Concat2List(node*&head1, node*&head2,node *&head3) ;
void sorted_list_usingBubble (node *&head) ;
int Count(node*head) ;
int remove_from_End (node *&head,int  n) ;
int nth_node_value (node *head,int n ) ;

int main()
{  int data;
node *head=NULL;
node *head2=NULL;
create_dynamic_list (head );
///create_dynamic_list (head2 );

cout <<remove_from_End (head,4) ;
// merge_alternate_2list(head,head2) ;
printList( head) ;
///printList( head2) ;


///PrintList(head) ;


    return 0;
}
int nth_node_value (node *head,int n)
 { int y= Count(head) ;
    if (head ==NULL) {
        return -1;
    }
 else if (y<n) {
    return -1;
}
else {
 int from_first =y- n; ///4
    node *x=head;
    while(from_first !=0) {
        x=x->next;
        from_first--;

    }
    return x->data;

}

}
void merge_alternate_2list(node *&head1, node *&head2)
{
//if (head1==NULL || head2==NULL) {
//    PrintList(head1) ;
//}
node *head1_next=head1->next;
 head1->next=head2;
 head2=head2->next;//counter 2
 head1->next->next=head1_next;
 merge_alternate_2list(head1_next,head2) ;

}

int remove_from_End (node *&head, int endposition)
{

int  n =  Count(head)-endposition ;// 2
node * slow_Ptr =head;
node * fast_Ptr=head;
node *x=head;
while( n!=0) { ///  fast ->   1 ->  (  n = 2)    ->       3         4 5 6
       x= x->next ;
    n--;
}
x->next=x->next->next;
//if (fast_Ptr == NULL) {
//return  head->next->data; // remove first node
//}
//while (fast_Ptr->next !=NULL) {
//    fast_Ptr=fast_Ptr->next;
//    slow_Ptr=slow_Ptr->next;
//}
//slow_Ptr->next=slow_Ptr->next->next;

PrintList(head);

}


int Count(node*head)
 {
node*runner;
int counter=0;
runner=head;
while (runner!=NULL)
    {

            counter++;
        runner=runner->next;
} return counter;
}

void Concat2List(node*&head1, node*&head2,node *&head3)
{

for ( node *run1 =head1; run1!=NULL;run1=run1->next  )
{
        InSertionLast(head3,run1->data) ;

}
for ( node *run2 =head2; run2!=NULL;run2=run2->next  )
{
        InSertionLast(head3,run2->data) ;

}
}
void sorted_list_usingBubble (node *&head)
 {

node *runner1=head;
node *runner2;
while (runner1!=NULL) {
    for(runner2= runner1->next ;runner2!=NULL;runner2=runner2->next) {
    if ( runner1->data > runner2->data) {
swap(runner1->data,runner2->data) ;
    }

}
runner1=runner1->next;
}

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

void printList(node* head)
{
    node* ptr = head;
    while (ptr!=NULL)
    {
        cout << ptr->data << " —> ";
        ptr = ptr->next;
    }

    cout << "null\n";
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

void intersection2list(node *&head1,node*&head2)
 {

node *temp;
while (head1!=NULL)   {
    temp = head2;
    while (temp!=NULL)
{

if (head1==temp) {
        cout <<head1->data << "\t";

}
    temp=temp->next;
}

head1=head1->next;
                    }
                            cout <<head1->data << "\t";

 }


 void reverseList(node *head1 ,node *&head2)
{
    for (node *run=head1;run!=NULL;run=run->next) {
        InSertionFirst(head2,run->data) ;
    }

}
void maxSub_list (node *head, int target)
{
    node *run1;
    node *run2;
   // int len=0; list is not fixed size
   node *start;
     start=head;
    node* end =NULL;
    for (run1=head;run1!=NULL;run1=run1->next) {
            int sum=0;
            for (run2=run1;run2!=NULL;run2=run2->next) {
          sum+=run2->data;
         if (target==sum)
        {
            start=run1;
            end=run2;

         }
}
    }
        cout << start->data <<" "<<end->data<<endl ;

    cout << start <<" "<<end ;
}

void duplicate(node *head)
 {
node *run1=head;
node *run2;
node *duplicated;
while(run1!=NULL&&run1->next!=NULL)

    {
    run2=run1;
    while(run2->next !=NULL)
  {
      if (run1->data== run2->next->data) {
        duplicated=run2->next;
        run2->next=run2->next->next;
        delete duplicated;

      }
      else {

        run2=run2->next;
      }
  }     run1=run1->next;

}

}

int merge2list (node *&head1,node *&head2, node *&head3sort)
{
node *head3=NULL;
if (head1==NULL) {
    cout << head2;
}
if (head2==NULL) {
    cout << head1;
}
while (head1 !=NULL && head2 !=NULL) {

    if (head1->data <= head2->data)
    {
        head3sort=head1;
        head1=head3sort->next;
    // one step

    }
    else
    {
        head3sort=head2;
        head2=head3sort->next;

    }



 head3=head3sort;
 /////////////
 while (head1 !=NULL&& head2!=NULL) {

    if (head1->data <= head2->data)
    {
        head3sort->next=head1;
    head3sort=head1;
    head1=head3sort->next;
    // one step

    }
    else
    {
        head3sort->next=head2;
        head3sort=head2;
    head2=head3sort->next;

    }
    if (head1==NULL) {
head3sort=head2;
}
if (head2==NULL) {

head3sort=head1;
}} }

///
return head3->data ;


}
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
void merge(Node *a, Node* &b)
{
    // base case
    if (a == nullptr || b == nullptr) {
        return;
    }

    // take backup of next of `a`
    Node *a_next = a->next;

    // rearrange pointers
    a->next = b;
    b = b->next;
    a->next->next = a_next;

    merge(a_next, b);
}
void MovetoFront(node *&head)
 {

node *last=head;
node*seclast=NULL;
if (head==NULL || head->next == NULL) {
    return;
}
while ( last->next !=NULL) {
seclast=last;
last=last->next;
}
seclast->next=NULL;
last->next=head;
head=last;

}
void rotateTOleftbyONE(node *&head)
 {

node *last=head;
node*seclast=NULL;
if (head==NULL || head->next == NULL) {
    return;
}
while ( last->next !=NULL) {
seclast=last;
last=last->next;
}
seclast->next=NULL;
last->next=head;
head=last;

}

void merge2list_Big_O_of_1_without_using_extra_space  (node *&head1,node *&head2)
{
node *result =head1;
node *TEMP=NULL;
if (head1==NULL) {
    cout << head2;
}
if (head2==NULL) {
    cout << head1;
}
if (head1->data > head2->data) {
    swap(head1,head2) ;
}
while (head1 !=NULL && head2 !=NULL) {

    if (head1->data <= head2->data)
    {
        TEMP=head1;
        head1=head1->next;
    // one step

    }
    else
    {
        TEMP->next=head2;
swap(head1,head2) ;
    }



 /////////////
 while (head1 !=NULL) {
TEMP->next=head1;
TEMP=head1;
head2=head2->next;
}
while (head2 !=NULL) {
TEMP->next=head2;
TEMP=head2;
head2=head2->next;
}
cout << result->data;

}
cout << result->data;



}
int  pair_node_sum (node *head, int sum)
{
node *runner1;
node *runner2;
for (runner1=head;runner1->next!=NULL;runner1=runner1->next) {
    for (runner2=head->next;runner2!=NULL;runner2=runner2->next) {
    if (runner1->data+runner2->data==sum) {
        cout<< "pair of nodes is ( " << runner1->data << " ," << runner2->data<< ")"  <<  " = "<<sum <<endl;
}
}
}
}
void maxSub_list (node *head, int target)
{
    node *run1;
    node *run2;
    node *start;
    start=head;
    node* end =NULL;
    for (run1=head;run1!=NULL;run1=run1->next) {
            int sum=0;
            for (run2=run1;run2!=NULL;run2=run2->next) {
          sum+=run2->data;
         if (target==sum)
        {
            start=run1;
            end=run2;

         }
}
    }
        cout << start->data <<" "<<end->data<<endl ;
    cout << start <<" "<<end ;
}
