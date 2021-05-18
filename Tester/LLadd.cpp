#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int val;
		Node* next;
};
	
Node* createnewnode(int x)
{
	Node* n=new Node;
	n->val=x;
	n->next=NULL;
	return n;
}
//Inserting in front 
void insertfront(int x,Node** head)
{
	if(*head==NULL)
	{
		*head=createnewnode(x);
	}
	else
	{
		Node* temp=createnewnode(x);
		temp->next=*head;
		*head=temp;
	}
}
//Adding two Numbers
Node* addTwoNumbers(Node** A, Node** B) {
    Node *head=NULL;
    int sum=0,carry=0;
    while((*A)!=NULL || (*B)!=NULL || carry>0)
    {
        if((*A)!=NULL) sum+=(*A)->val;
        if((*B)!=NULL) sum+=(*B)->val;
        sum+=carry;
        carry=sum/10;
        sum=sum%10;
        insertfront(sum,&head);  //as we start addition from onesplace so that is correct as A and B has digits stored in reverse order 
        sum=0;                  //	and here inserting in front would help to get ans in required order
        if((*A)!=NULL)
        (*A)=(*A)->next;
        if((*B)!=NULL)
        (*B)=(*B)->next;
    }
    return head;
}
//Printing
void print(Node** head)
{
	Node *t=*head;
	while(t!=NULL)
	{
		cout<<t->val<<" ";
		t=t->next;
	}
	cout<<endl;
}


int main()
{
	Node* headA=NULL;
	Node* headB=NULL;

	//taking input for A
	int n1; //Number of digits in first Number
	cin>>n1;
	while(n1--)
	{
		int x;
		cin>>x;
		insertfront(x,&headA);  //we are inserting in front to form linked list in reverse order i.e. from 231 is stored as 1->2->3 with 1 as head
	}

	//taking input for B
	int n2; //Number of digits in Second Number
	cin>>n2;
	while(n2--)
	{
		int x;
		cin>>x;
		insertfront(x,&headB);
	}
	Node* result=addTwoNumbers(&headA,&headB);
	print(&result);
}