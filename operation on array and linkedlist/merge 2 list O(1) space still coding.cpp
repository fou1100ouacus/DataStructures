#include <bits/stdc++.h>
using namespace std;
struct node {
int data;
node *next;};
void InSertionLast(node *&head,int x)  ;
void PrintList(node *head) ;
void sorted_list_usingBubble (node *&head) ;void  merge2list (node *&head1,node *&head2) ;
void merge2list_Big_O_of_1_without_using_extra_space  (node *&head1,node *&head2) ;

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
InSertionLast(head2,4) ;
InSertionLast(head2,13) ;
InSertionLast(head2,10) ;
InSertionLast(head2,11) ;


PrintList(head2);
 merge2list_Big_O_of_1_without_using_extra_space  (head1,head2) ;



//-----------
node *head3;
head3=NULL;
//cout <<merge2list (head1,head2, head3) ;
//PrintList(head3);

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
