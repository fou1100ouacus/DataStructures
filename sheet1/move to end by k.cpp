#include <iostream>

using namespace std;
struct node{
int data;
node *next;
};
void moveToEnd(node* head, int key) ;
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
moveToEnd( head,  5) ;
PrintList(head) ;

    return 0;
}



void moveToEnd(node* head, int key)
{

     node* pKey = head;

    // Traverse list
     node* pCrawl = head;
    while (pCrawl != NULL) {

        if (pCrawl != pKey && pCrawl->data != key) {
            pKey->data = pCrawl->data;
            pCrawl->data = key;
            pKey = pKey->next;
        }

        // Find next position where key is present
        if (pKey->data != key)
            pKey = pKey->next;

        // Moving to next Node
        pCrawl = pCrawl->next;
    }
}
