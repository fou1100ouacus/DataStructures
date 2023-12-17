#include <iostream>
using namespace std;
struct node {
int data;
node *next;
};
void addfirst(node *&head , int x) ;
void printlist (node *head) ;
int middle(node *&head) ;

int main()
{
int data;
node *head;
head=NULL;
addfirst(head, 3);
addfirst(head, 4);
addfirst(head, 4);
addfirst(head, 5);
addfirst(head, 6);
printlist(head);
 middle(head) ;
 addfirst(head, 3);
addfirst(head, 4);
addfirst(head, 4);
addfirst(head, 5);
 printlist(head);




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
int middle(node *&head)
{
int c=0;
node *runner;

for ( runner=head;runner!=NULL;runner=runner->next)
{
    c++;
}
if (c%2==0)
{
    for (int i=0;i<(c/2)-1;i++)
    {
        runner=runner->next;
    }
}
else {
    for (int i=0;i<c/2;i++) {
                runner=runner->next;
    }
}
return runner->data;
}
