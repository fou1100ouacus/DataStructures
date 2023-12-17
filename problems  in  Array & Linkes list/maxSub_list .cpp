#include <iostream>
using namespace std;
struct node {
int data;
node *next;
};
void addlast (node *&head, int x) ;
void PrintList(node *head) ;
void maxSub_list (node *head, int target);

int main()
{
int data;
node *head;
head=NULL;
addlast (head, 5);
addlast (head, 6);
addlast (head, -5);
//5, 6, -5, 5, 3, 5, 3, -2, 0
addlast (head, 5);
addlast (head, 3);
addlast (head, 5);
addlast (head, 3);
addlast (head, -2);
addlast (head, 0);

PrintList(head) ;
 maxSub_list (head,  8) ;


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
void maxSub_list (node *head, int target)
{
    node *run1;
    node *run2;
    node *start;
    start=head;
    node* end =NULL;
    for (run1=head;run1!=NULL;run1=run1->next) {
            int sum=0;
            for (run2=run1;run2!=NULL;run2=run2->next) {
          sum+=run2->data;
         if (target==sum)
        {
            start=run1;
            end=run2;

         }
}
    }
        cout << start->data <<" "<<end->data<<endl ;
    cout << start <<" "<<end ;
}
