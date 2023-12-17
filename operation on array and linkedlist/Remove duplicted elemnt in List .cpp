#include <iostream>
using namespace std;
struct node {
int data;
node *next;
};
void addfirst(node *&head , int x) ;
void printlist (node *head) ;
void duplicate(node *head) ;

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
duplicate(head) ;
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
void duplicate(node *head) {
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
