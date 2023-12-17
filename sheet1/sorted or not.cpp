#include <iostream>

using namespace std;
struct node{
int data;
node *next;
};

bool isSortedDesc(node *head) ;
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
}         cout << "]" ;

} cout << endl;

}

int main()
{

    int data;
node *head=NULL;
 InSertionLast(head , 5) ;
 InSertionLast(head , 3);
 InSertionLast(head , 4);

 InSertionLast(head , 7);

 cout << isSortedDesc(head) ;


    return 0;
}
bool isSortedDesc(node *head)
{
    if (head == NULL)
        return true;

    // Traverse the list till last node and return
    // false if a node is smaller than or equal
    // its next.
    for (node *t=head; t->next != NULL; t=t->next)
       if (t->data <= t->next->data)
            return false;
    return true;
}
