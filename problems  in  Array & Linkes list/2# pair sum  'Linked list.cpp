#include <iostream>

using namespace std;

struct node {
int data;
node *next;

};
int pair_node_sum (node *head, int sum)  ;

void addlast (node *&head, int x) ;
void PrintList(node *head) ;
void moveToEnd(node* head, int key)
{
     struct node* pKey = head;
    // Traverse list
     node* run = head;
    while (run != NULL) {
        if (run!= pKey ) {
            if (run->data!=key ) { ///num
            pKey->data = run->data;
            run->data = key;
            run = run->next;
        } }
        // Find next position where key is present
        if (pKey->data != key)
            pKey = pKey->next;
        // Moving to next Node
        run = run->next;
    }
}
int main()
{
int data;
node *head;
head=NULL;
addlast (head, 5);
addlast (head, 4);
addlast (head, 7);
addlast (head, 3);
moveToEnd(head,4);
PrintList(head) ;
 ///cout <<pair_node_sum (head, 9) ;

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
int  pair_node_sum (node *head, int sum)
{
node *runner1;
node *runner2;
for (runner1=head;runner1->next!=NULL;runner1=runner1->next) {
    for (runner2=head->next;runner2!=NULL;runner2=runner2->next) {
    if (runner1->data+runner2->data==sum) {
        cout<< "pair of nodes is ( " << runner1->data << " ," << runner2->data<< ")"  <<  " = "<<sum <<endl;
    }


}


}




}

