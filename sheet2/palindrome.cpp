#include<iostream>
using namespace std;
struct node {
	int data;
	node*next;
};
void addfirst(node*&head, int x){
	node*q;
	q=new node();
	q->data=x;
	q->next =NULL;
	if(head==NULL){
		head =q;
	}
	else{
		q->next =head;
		head=q;
	}
}
 void  printlist(node*head1){
	node*run1;
	run1=head1;
	while(run1!=NULL){
		cout<<run1->data<<"\t";
		run1=run1->next;
	}
}
void reverse_2list(node*head1,node*&head2){
	node*run2;
	run2=head1;
	while(run2!=NULL){
		addfirst(head2,run2->data);
		run2=run2->next;
	}
}


void ispalin(node*&head1,node*&head2){
	node*run1;
	run1=head1;
	node*run2;
	run2=head2;
	while(run1!=NULL&&run2!=NULL){
		if(run1->data==run2->data)
		run1=run1->next;
		run2=run2->next;
	}
	if(run1==NULL){
		cout<<"the linked list is palinrom "<<endl;

	}
	else{
		cout<<"not palinrom"<<endl;
	}
}
int main(){
	node*head1;
	head1=NULL;
	addfirst(head1,10);
	addfirst(head1,20);
	addfirst(head1,20);
	addfirst(head1,10);
	printlist(head1);
	cout<<endl;
	node*head2;
	head2=NULL;
	reverse_2list(head1,head2);
	printlist(head2);
	cout<<endl;
   ispalin(head1,head2);
}
