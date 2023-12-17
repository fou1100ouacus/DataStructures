#include <bits/stdc++.h>
using namespace std;
struct node {
int data;
node *next;};
void InSertionLast(node *&head,int x)  ;
void PrintList(node *head) ;
void sorted_list_usingBubble (node *&head) ;
int  merge2list (node *&head1,node *&head2, node *&head3sort) ;

int main()
{
int data;
node *head1;
head1=NULL;
InSertionLast(head1,5) ;
InSertionLast(head1,6) ;
InSertionLast(head1,7) ;
InSertionLast(head1,8) ;
sorted_list_usingBubble (head1) ;

PrintList(head1);

//------------
node *head2;
head2=NULL;
InSertionLast(head2,9) ;
InSertionLast(head2,4) ;
InSertionLast(head2,13) ;
InSertionLast(head2,10) ;
InSertionLast(head2,11) ;

sorted_list_usingBubble (head2) ;

PrintList(head2);
//-----------
node *head3;
head3=NULL;
merge2list (head1,head2, head3) ;
//cout <<merge2list (head1,head2, head3) ;
PrintList(head3);

}
void InSertionLast(node *&head,int x)
{
node *L;
L= new node () ;
L->data= x ;
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
} }         cout << "]" ;

cout << endl;

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

