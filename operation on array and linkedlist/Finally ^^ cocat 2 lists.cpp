// C++ program concat 2 lists
#include <bits/stdc++.h>
using namespace std;
struct node {
int data;
node *next;};
void InSertionLast(node *&head,int x)  ;
void PrintList(node *head) ;
void Concat2List(node*&head1, node*&head2,node *&head3)  ;

int main()
{
int data;
node *head1;
head1=NULL;
InSertionLast(head1,5) ;
InSertionLast(head1,6) ;
InSertionLast(head1,7) ;
InSertionLast(head1,8) ;
PrintList(head1);

//------------
node *head2;
head2=NULL;
InSertionLast(head2,9) ;
InSertionLast(head2,10) ;
InSertionLast(head2,11) ;
InSertionLast(head2,12) ;
PrintList(head2);
//-----------
node *head3;
head3=NULL;
Concat2List(head1, head2,head3) ;
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
void Concat2List(node*&head1, node*&head2,node *&head3)
{
//
//node *run1, *run2;
//run1=head1;
//run2=head2;
//while(run1 !=NULL && run2 !=NULL) {
//
//    InSertionLast(head3,run1->data) ;
//    InSertionLast(head3,run2->data) ;
//    run1=run1->next;
//    run2=run2->next;
//
//}
for ( node *run1 =head1; run1!=NULL;run1=run1->next  )
{
        InSertionLast(head3,run1->data) ;

}
for ( node *run2 =head2; run2!=NULL;run2=run2->next  )
{
        InSertionLast(head3,run2->data) ;

}
}
