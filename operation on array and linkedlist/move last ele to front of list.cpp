#include <bits/stdc++.h>
using namespace std;
struct node {
int data;
node *next;};

void PrintList(node *head) ;
void fun1(node* head) ;
void InSertionLast(node *&head,int x) ;

void MovetoFront(node *&head) ;

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
 MovetoFront(head1) ;
PrintList(head1);

//------------

//-----------


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
void fun1(node* head)
{
if (head == NULL)
	return ;
else
fun1(head->next);
cout << head->data << " ";
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


