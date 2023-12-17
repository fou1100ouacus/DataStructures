#include <bits/stdc++.h>
using namespace std;
struct node {
int data;
node *next;};

void PrintList(node *head) ;
void InSertionLast(node *&head,int x) ;
void intersection2list(node *&head1,node*&head2) ;

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
InSertionLast(head2,73) ;
InSertionLast(head2,83) ;
InSertionLast(head2,7) ;
InSertionLast(head2,8) ;
PrintList(head2);

 intersection2list(head1,head2) ;



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

void reverseList(node *head1 ,node *&head2)
{
    for (node *run=head1;run!=NULL;run=run->next) {
        InSertionFirst(head2,run->data) ;
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
