#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};
node* head=NULL;
node *tail=NULL;
node* createnode(int val)
{
	node *n=new node;
	n->data=val;
	n->next=NULL;
	if(head==NULL)
		head=n;
	return n;
}
int countnodes()
{
	node* t=head;
	int c=0;
	while(t!=NULL)
	{
		c++;
		t=t->next;
	}
	return c;
}
void printnodes()
{
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
		return;
	}
	node* t=head;
	while(t!=NULL)
	{
		cout<<t->data<<" ";
		t=t->next;
	}
	cout<<endl;
	return;
}
//Insertion
void insertbegin(int n)
{
	if(head==NULL)
	{
		node* temp=createnode(n);
		head=temp;
		tail=temp;
	}
	else
	{
		node* temp=createnode(n);
		temp->next=head;
		head=temp;
	}
	return;
}

void insertend(int n)
{
	if(head==NULL)
	{
		node *temp=createnode(n);
		head=temp;
		tail=temp;
	}
	else
	{
		node* temp=createnode(n);
		tail->next=temp;
		tail=temp;
	}
	return;
}

void insertpos(int k,int n)
{
	if(k>n)
		insertend(n);
	else
	{
		if(k==1)
			insertbegin(n);
		else
		{
			int c=0;
			node *t=head;
			while(c!=k-2)
			{

				t=t->next;
				c++;
			}
			node *temp=createnode(n);
			temp->next=t->next;
			t->next=temp;
		}
	}
	return;
}

//deleting node
void deletebegin()
{
	if(head==NULL)
	{
		cout<<"LinkedList is empty"<<endl;
		return;
	}
	if(head->next==NULL)
	{
		delete(head);
		tail=NULL;
		head=NULL;
		return;
	}
	node *temp=head;
	head=temp->next;
	delete(temp);
	return;
}

void deleteend()
{
	if(head==NULL){
		cout<<"LinkedList is empty"<<endl;
		return ;
	}
	node *t=head;
	if(t->next==NULL)
	{
		delete(t);
		head=NULL;
		tail=NULL;
		return;
	}
	node *prev;
	while(t->next!=NULL)
	{
		prev=t;
		t=t->next;
	}
	tail=prev;
	tail->next=NULL;
	delete(t);
	return;
}

void deletepos(int k)
{
	if(head==NULL)
	{
		cout<<"Linked List is empty"<<endl;
	}
	if(k>countnodes())
	{
		cout<<"Position is invalid"<<endl;
	}
	if(k==1)
	{
		deletebegin();
		return;
	}
	int c=0;
	node* t=head;
	while(c!=k-2)
	{
		c++;
		t=t->next;
	}
	node *temp = t->next;
	t->next=temp->next;
	delete(temp);
	return;
}
void revprint(node * t)
{
	if(t==NULL)
		return;
	revprint(t->next);
	cout<<t->data<<" ";
	return;
}

node* recursiverevlist(node* head)
{
	if(head==NULL)
	{
		cout<<"empty"<<endl;
		return head;
	}
	if(head->next==NULL)
	{
		return head;
	}
	node* newhead=recursiverevlist(head->next);
	node* n=head->next;
	n->next=head;
	head->next=NULL;
	return newhead;
}
node* iterativerevlist(node* head)
{
	if(head->next==NULL)
		return head;
	node *prev=NULL;
	node *curr=head;
	node *n=head->next;
	while(curr!=NULL)
	{
		curr->next=prev;
		prev=curr;
		curr=n;
		if(n!=NULL)
		n=n->next;
	}
	return prev;
}


int main()
{
	cout<<"Enter Size of LinkedList "<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		node *temp;
		temp=createnode(val);
		if(tail==NULL)
			tail=temp;
		else{
			tail->next=temp;
			tail=temp;
		}
	}
	int z;
	//counting nodes
	cout<<"Total nodes "<<countnodes()<<endl;
	// cin>>z;

	//printing nodes
	cout<<"Present nodes are "<<endl;
	printnodes();
	// cin>>z;
	cout<<"inserting nodes"<<endl;
	//inserting node
	insertbegin(6);
	insertend(8);
	insertpos(4,9);
	printnodes();
	// cin>>z;

	cout<<"deleting nodes"<<endl;
	//deleting node
	printnodes();

	deletebegin();
	printnodes();
	// cin>>z;
	deleteend();
	// cin>>z;
	printnodes();
	deletepos(6);
	printnodes();
	cin>>z;

	//print reverse
	revprint(head);
	cout<<endl;
	//reverselist
	head=recursiverevlist(head);
	printnodes();
	// stackrevlist();
	// printnodes();
	head=iterativerevlist(head);
	printnodes();

}