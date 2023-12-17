#include <iostream>
using namespace std;
struct node {
int data;
node *next;
};
void addfirst(node *&head , int x) ;
void printlist (node *head) ;
void segerateOddEven (node *&head ,node *&head2) ;
void InSertionLast(node *&head , int y) ;
void mergeList(node*&head1, node*&head2,node *&head3)  ;

int main()
{
int data;
node *head;
head=NULL;
node *head2=NULL;
addfirst(head, 9);
addfirst(head, 4);
addfirst(head, 2);
addfirst(head, 3);
addfirst(head, 4);
addfirst(head, 0);
segerateOddEven (head,head2) ;
node *head3=NULL;
mergeList(head, head2,head3)  ;
printlist(head2);
printlist(head3);


    return 0;
}
void addfirst(node *&head , int x)
{
node *p;
p=new node () ;
p->data=x;
p->next=NULL;
if (head==NULL)
head=p;
else
{
    p->next=head;
    head=p;
}
}
void printlist (node *head)
{

if (head==NULL) {
    cout << "empty list " ;}
else {
    node *runner;
    runner=head;
    cout << "[";
    while (runner!=NULL) {
        cout << runner->data<< " \t";
        runner=runner->next;
    }
    cout << "]";
}
}


void segerateOddEven (node *&head,node *&head2)
{
    node *runner=head;
    while(runner!=NULL) {
    if (runner->data%2==0) {

addfirst(head2,runner->data) ;
    }
    else {

        InSertionLast(head2 ,runner->data) ;
    }
          runner=runner->next; }

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

void mergeList(node*&head1, node*&head2,node *&head3)
{

node *run1, *run2;
run1=head1;
run2=head2;
while(run1 !=NULL && run2 !=NULL) {

    InSertionLast(head3,run1->data) ;

    run1=run1->next;
        InSertionLast(head3,run2->data) ;

    run2=run2->next;

}


}
