#include <iostream>
using namespace std;
struct node {
int data;
node *next;
};
void addfirst(node *&head , int x) ;
void printlist (node *head) ;
void  duplicate(node *head) ;

int main()
{
int data;
node *head;
head=NULL;
addfirst(head, 3);
addfirst(head, 3);

addfirst(head, 6);
addfirst(head, 65);
addfirst(head, 4);
addfirst(head, 35);

cout << "the list before remove duplicated element " ;

printlist(head);
duplicate(head) ;
cout << "the list after remove duplicated element " ;
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
    cout << "]" <<endl;
}
}
void duplicate(node *head) {
node *run1=head;
node *run2;
node *duplicated;
while(run1!=NULL&&run1->next!=NULL)

    {
    run2=run1; //  intilization
    cout <<run2->data<< "\t"; // to understand only
    while(run2->next !=NULL)
  {
      if ( run2->next->data==run1->data) {
        duplicated=run2->next;// pointer
        cout << "address of duplicated elem is "<<duplicated<< "  and the element  is "<< (duplicated->data) <<endl ;
        run2->next=run2->next->next;// counter
    //   delete duplicated; // in memory only

      }
      else {

        run2=run2->next; // counter
      }
  }     run1=run1->next; // counter

}

}
