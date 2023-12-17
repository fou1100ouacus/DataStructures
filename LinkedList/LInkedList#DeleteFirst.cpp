#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;

};
void PrintList(node *head) ;
int SumList(node*head) ;
void InSertionLast(node *&head , int y) ;
void DeleteFirst (node *&head) ;

int main()
{  int data;
node  *head;
head = NULL;// empty list
PrintList(head) ;

InSertionLast(head,64);
PrintList(head) ;
DeleteFirst (head) ;

InSertionLast(head,6);
PrintList(head) ;

InSertionLast(head,7);
PrintList(head) ;

InSertionLast(head,5);

PrintList(head) ;
cout <<SumList(head) <<endl;
head= new node();
head->data=20;
head->next=NULL;

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
void DeleteFirst (node *&head)
 {
if (head==NULL) {
    cout << "Empty list" <<endl;
}else {
    head=head->next;
}


}
int SumList(node*head)
{
int sum=0;
for(node*runner=head; runner!=NULL;runner=runner->next)
sum=sum+runner->data;
return sum;
}
int CountEven(node*head)
 {

node*runner;
int counter=0;
runner=head;
while (runner!=NULL)
    {
    if (runner->data%2==0)

            counter++;
        runner=runner->next;



} return counter;

}
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
