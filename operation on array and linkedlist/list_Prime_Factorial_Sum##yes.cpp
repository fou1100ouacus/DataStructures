//Given a Linked list of N integers, the task is to find the
// sum of factorials of each prime element in the list.

#include <iostream>
using namespace std;
struct node{
int data;
node *next;
};
bool IsPrime(int n) ;
void InSertionLast(node *&head , int y) ;
void PrintList(node *head)  ;
int  sum_factorial_prime_num(node *&head) ;


int main()
{
int data;
node *head;
head=NULL;

 //InSertionLast(head , 4) ;
 InSertionLast(head , 5) ;//
 InSertionLast(head , 7) ;//
 InSertionLast(head , 3) ;//
 InSertionLast(head , 2) ;//

 PrintList(head);
 cout <<sum_factorial_prime_num(head) ;


    return 0;
}
bool IsPrime(int n) {
    bool is_prime = true;
if (n==1 || n== 0) {
    is_prime= false;
}
for( int i=2;i<=n/2;i++){
   if (n%i==0) {
    is_prime=false;
    break;
   }

}
if (is_prime) { cout << true<<endl;}
else {cout <<false <<endl;}

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
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}
 int  sum_factorial_prime_num(node *&head)
 {

 int sum=0;
 node *runner=head;
 while (runner!=NULL) {
        if (IsPrime(runner->data)) {
    sum+=factorial(runner->data);
        runner=runner->next;}


 else {
    runner=runner->next;
 }

  }
  return sum;
 }
