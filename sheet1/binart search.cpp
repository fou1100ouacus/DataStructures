#include <iostream>

using namespace std;
struct node{
int data;
node *next;
};

int  binarySearch(node *head, int value) ;
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
cout <<binarySearch(head, 5) ;


    return 0;
}
int  binarySearch(node *head, int value)
{
    node* start = head;
   node* last = NULL;
   do{
      node* mid = mid_node(start, last);
      if (mid == NULL)
         return NULL;
      if (mid -> data == value)
         return mid;
      else if (mid -> data < value)
         start = mid -> next;
      else
         last = mid;
   }
   while (last == NULL || last != start);
      return NULL;
}
