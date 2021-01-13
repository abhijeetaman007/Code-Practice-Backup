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
node *A=NULL;
node *Aprev=NULL;
node *B=NULL;
node *Bnext=NULL;

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
void revlist(node* head)
{	
	if(head==B)
		return ;
	revlist(head->next);
	head->next->next=head;
	return;
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
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int val;
		cin>>val;
		insert(val);
	}
	printnodes();
	int a,b;
	cin>>a>>b;
	int c=1;
	node* t=head;
	if(a!=1)
	{
		while(c<a-2)
		{
			c++;
			t=t->next;
		}
		Aprev=t;
	}
	t=head;
	c=0;
	while(c<b-1)
	{
		t=t->next;
		c++;
	}
	if(Aprev!=NULL)
	A=Aprev->next;
	else
	A=head;	
	B=t;
	Bnext=t->next;
	revlist(A);
	if(Aprev!=NULL)
	Aprev->next=B;
	else
		head=B;
	A->next=Bnext;
	printnodes();

}