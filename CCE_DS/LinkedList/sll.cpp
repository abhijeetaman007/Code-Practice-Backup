#include<bits/stdc++.h>
using namespace std;
class sll
{
		class Node
	{
	public:
		int info;
		Node* next;
	};
	Node *curr=NULL;
	Node *head=NULL;
	public:
	void push(int e);
	int poplast();
	int top();
	void display();

};
void sll::push(int e)
{
	Node *temp=new Node;
	if(head==NULL)
	{
		temp->info=e;
		temp->next=NULL;
		head=temp;
		curr=temp;
	}
	else
	{
		curr->next=temp;
		temp->info=e;
		temp->next=NULL;
		curr=temp;
	} 
}
int sll::poplast()
{
	if(head!=NULL)
	{
		Node *t=head,*prev=NULL;
		if(head->next==NULL)
		{
			int a=head->info;
			head=NULL;
			return a;
			// cout<<"Stack is already is empty"<<endl;
		}
		else
		{
			cout<<"else"<<endl;
			prev=head->next;
			while(t->next!=NULL)
			{
				cout<<"inside"<<endl;
				prev=t;
				t=t->next;
			}
			int x;
			cin>>x;
			curr=prev;
			prev->next=NULL;
			int a=t->info;
			delete t;
			return a;
		}

	}
	else
	{
		cout<<"Linked List is Empty"<<endl;
		return -1;
	}
}
void sll::display()
{
	Node *t=head;
	while(t!=NULL)
	{
		cout<<t->info<<" ";
		t=t->next;
	} 
	cout<<endl;
	if(head==NULL)
		cout<<"Linked List is Empty"<<endl;
}
int main()
{
	sll l;
	int a;
	int option;
	// int n;
	// cin>>n;
		do{

		cout<<"1.push\n2.pop\n3.display\n4.exit\n";
		cin>>option;
switch(option)
	{
	case 1:	cout<<"enter the element to be pushed\n";
		cin>>a;
		l.push(a);
		break;
	case 2:	cout<<"Deleted item\n"<<l.poplast()<<endl;
		break;
	case 3:	l.display();
	break;
	case 4:return (0);
	break;
	// case 5:que.vari();
	}
	}while(1);

}