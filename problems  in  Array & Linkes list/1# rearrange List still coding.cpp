#include <iostream>

using namespace std;
//Rearrange a list with alternate high and low nodes
//--Given a list, rearrange it such that every second node becomes greater than
// its left and right nodes. Assume no duplicate nodes are present in the list.
struct node {
int data;
node *next;

};
void addlast (node *&head, int x) ;
void PrintList(node *head) ;
void reArrange (node *&head ) ;

int main()
{
int data;
node *head;
head=NULL;
addlast (head, 5);
addlast (head, 4);
addlast (head, 7);

addlast (head, 3);
addlast (head, 2);
addlast (head, 35);
addlast (head, 53);

PrintList(head) ;
reArrange (head ) ;
PrintList(head) ;

    return 0;
}
void addlast (node *&head, int x)
 {
node *l;
l=new node () ;
l->data=x;
l->next=NULL;
if (head==NULL) {
    head=l;
}
else {
    node *runner=head;

    while (runner->next!=NULL) {

        runner=runner->next;

    }
    runner->next=l;





}


}
void PrintList(node *head)
 {
if (head== NULL)
{
    cout << "EMPTY LIST" <<endl;
}
else {
  node* runner=head;
while(runner!=NULL) {
   cout <<runner->data <<"\t";
   runner=runner->next;
} } cout << endl;}
void reArrange (node *&head )
 {
node *runner;
node *prev=head;
for ( runner=prev->next;runner->next!=NULL;runner=runner->next)
if (runner->data < prev->data) {
    swap(runner->data, prev->data) ;
}
if(  prev ->next !=NULL&& runner->data < prev->next->next->data) {
    swap(runner->data,  prev->next->next->data) ;


}


}
