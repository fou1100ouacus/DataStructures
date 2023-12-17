#include <iostream>
using namespace std;
struct node {
int data;
node *next;
};
void InSertionFirst (node *&head , int x) ;
void PrintList(node *head) ;
void reverseList(node *head1 ,node *&head2);

int main()
{
int data;
node *head ;
head=NULL;
InSertionFirst (head , 5) ;
InSertionFirst (head , 4) ;
InSertionFirst (head , 3) ;
InSertionFirst (head , 2) ;
PrintList(head) ;

node *head2 ;
head2=NULL;
reverseList(head ,head2) ;
PrintList(head2) ;


    return 0;
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
} } cout << endl;

}
void InSertionFirst (node *&head , int x)
{

node *F;
F=new node();
F->data=x;
F->next=NULL;
if (head== NULL)
{
    head=F;
}
else
{
    F->next=head;
    head=F;
}

}

void reverseList(node *head1 ,node *&head2)
{
    for (node *run=head1;run!=NULL;run=run->next) {
        InSertionFirst(head2,run->data) ;
    }

}
