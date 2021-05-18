#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node* next;	
};
node* head=NULL;
node* createnode(int val)
{
	node* n=new node;
	n->data=val;
	n->next=NULL;
	return n;
}
void insert(int val)
{
	if(head==NULL)
	{
		head=createnode(val);
	}
	else
	{
		node* n=createnode(val);
		node* t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=n;
	}
}
void printnodes()
{
	node* t=head;
	while(t!=NULL)
	{
		cout<<t->data<<" ";
		t=t->next;
	}

}
node *Aprev=NULL;
node *A=NULL;
node *B=NULL;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int val;
		cin>>val;
		insert(val);
	}
	printnodes();
	int a,b;
	cin>>a>>b;
	node* curr=head;
	node* p=NULL;
	node* n=head->next;
	int c=1;
	while(c!=b+1)
	{
		if(c==a-1){
			Aprev=curr;
		}
		if(c==a){
			A=curr;
		}
		if(c==b){
			B=curr;
		}
		if(c>a)
		{
			curr->next=p;			
		}
		p=curr;
		curr=n;
		if(n!=NULL)
		n=n->next;
		c++;
	}
	A->next=curr;
	if(Aprev!=NULL)
	Aprev->next=B;
	else
		head=B;
	printnodes();
}