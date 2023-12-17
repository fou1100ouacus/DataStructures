#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
int HLeader(node*head)
{
	node*run1;
	run1=head;
	while(run1!=NULL){
		node*run2;
		run2=run1->next;
	while(run2!=NULL){
            if (run1->data<= run2->data) {
                break;
            }

		run2=run2->next;
	}
	if(run2->data==run1->data){
		cout<<"leader"<<endl;
	}
	else{
		cout<<"no leader"<<endl;
	}
	run1=run1->next;
	}
}
void addlast(node*&head, int x){
	node*l;
	l=new node();
	l->data=x;
	l->next =NULL;
	if(head==NULL){
	head =l;
	}
else{
node*run;
run=head;
while(run->next!=NULL){
run=run->next;
}
run->next=l;
}}
void printlist(node*head){
	node*run;
	run=head;
	while(run!=NULL){
		cout<<run->data<<"\t";
		run=run->next;
	}
}
int main(){
node*head;
head=NULL;
addlast(head,20);
addlast(head,55);
addlast(head,2);
addlast(head,20);
printlist(head);
cout<<endl;
	HLeader(head);
	}
