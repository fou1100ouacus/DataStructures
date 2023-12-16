#include <iostream>
using namespace std;
struct node{
int data;
node *next;

};
void InSertionFirst (node *&head , int x) ;
int main()
{  int data;
node  *head;
head = NULL;// empty list
head= new node();
head->data=20;
head->next=NULL;
//-------------------
node*p;
p=new node();
p->data=33;
p->next =NULL;
head ->next=p;
cout <<&data <<endl;
cout <<head->next->data <<endl;// 33
cout <<head->data <<  endl;//20
//cout <<head->next->next->data <<endl; // no output
//cout <<&data <<endl;
node *q;
q=new node();
q->data=3333333;
p->next=q;
cout <<head->next->next->data <<endl;// 333333

    return 0;
}
void InSertionFirst (node *&head , int x) {

node *F;
F=new node();
F->data=x;
F->next=NULL;
if (head== NULL)
{
    head=p;
}
else {
        p->next=head;
    head=p;
}

}
   cout<< head->data<<endl;
    cout <<head->next->data<<endl;

    cout <<head->next->next<<endl;//0
    cout <<head<<endl; // location 34
    cout <<head->next<<endl; // location 333333

cout << & (head->data) <<endl; // location 34
cout << & (head->next->data)<<endl; // location 33333
