#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
	int val;
	TreeNode* left;
	TreeNode* right;
};

TreeNode* head=NULL;

// class Stack
// {

// 	int size=100;
// 	int a[100];
// 	int top=-1;
// public :
// 	bool isFull()
// 	{
// 		if(top+1==size)
// 			return true;
// 		return false;
// 	}
// 	bool isEmpty()
// 	{
// 		if(top==-1)
// 			return true;
// 		return false;
// 	}
// 	void push(int x)
// 	{
// 		if(isFull()){
// 			cout<<"Stack is Full"<<endl;
// 			return;
// 		}
// 		a[++top]=x;
// 	}
// 	int pop()
// 	{
// 		if(isEmpty())
// 		{
// 			cout<<"Stack is Empty pop"<<endl;
// 			return -1;
// 		}
// 		int x=a[top--];
// 		// top=top-1;
// 		return x;
// 	}
// 	int top()
// 	{
// 		if(isEmpty()){
// 			cout<<"Stack is Empty peek"<<endl;
// 			return -1;
// 		}
// 		return a[top];
// 	}
	
// };


// class Queue
// {
// 	int size=100;
// 	int a[100];
// 	int f=-1;
// 	int r=-1;

// 	void enque(int x)
// 	{
// 		if(r+1==size)
// 		{
// 			cout<<"Queue is full "<<endl;
// 		}
// 		a[++r]=x;
// 		if(f==-1)
// 			f=0;
// 	}
// 	void deque()
// 	{
// 		if(f==-1)
// 		{
// 			cout<<"Queue is empty "<<endl;
// 		}
// 		else if(f==r)
// 		{
// 			f=-1;
// 			r=-1;
// 		}
// 		else
// 		{
// 			f++;
// 		}
// 	}
// 	int peek()
// 	{
// 		return a[f];
// 	}	
// };












TreeNode* createNode(int x)
{
	TreeNode* n=new TreeNode;
	n->left=NULL;
	n->right=NULL;
	n->val=x;
	return n;
}

void createBTiterative()
{

	TreeNode* newnode=new TreeNode;
	int x;
	if(head==NULL)
	{
		cout<<"Input data for root node"<<endl;
		cin>>x;
		head=createNode(x);
	}
	queue<TreeNode*> q;
	q.push(head);
	while(!q.empty())
	{
		cout<<"Enter left of "<<q.front()->val<<endl;
		cin>>x;
		if(x!=-1)
		{
			TreeNode* n=createNode(x);
			q.front()->left=n;
			q.push(n);
		}
		cout<<"Enter right of "<<q.front()->val<<endl;
		cin>>x;
		if(x!=-1)
		{
			TreeNode* n=createNode(x);
			q.front()->right=n;
			q.push(n);
		}
		q.pop();
	}
}

void inorder(TreeNode* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);

}

void preorder_iterative()
{
	stack<TreeNode*> s;
	TreeNode* curr=head;
	while(!s.empty() || curr!=NULL)
	{
		if(curr!=NULL)
		{
			cout<<curr->val<<" ";
			s.push(curr);
			curr=curr->left;
		}
		else
		{
			curr=s.top()->right;
			s.pop();
		}
	}
}

void inorder_iterative()
{
	stack<TreeNode*> s;
	TreeNode* curr=head;
	while(curr!=NULL || !s.empty())
	{
		if(curr!=NULL)
		{
			s.push(curr);
			curr=curr->left;
		}
		else
		{
			cout<<s.top()->val<<" ";
			curr=s.top()->right;
			s.pop();
		}
	}
}

void post_order()
{
	stack<TreeNode*> s1,s2;
	s1.push(head);
	while(!s1.empty())
	{
		TreeNode* temp=s1.top();
		s1.pop();
		s2.push(temp);
		if(temp->left)s1.push(temp->left);
		if(temp->right)s1.push(temp->right);	
	}
	while(!s2.empty())
	{
		cout<<s2.top()->val<<" ";
		s2.pop();
	}
}
int count_leafnode(TreeNode* root)
{
	if(root->left==NULL && root->right==NULL){
		return 1;
	}
	if(root==NULL)
		return 0;
	return count_leafnode(root->left)+count_leafnode(root->right);
}


int main()
{
	createBTiterative();
	inorder(head);
	cout<<endl;
	preorder_iterative();
	cout<<endl;
	inorder_iterative();
	cout<<endl;
	post_order();
	cout<<endl;
	cout<<"Total lead nodes are "<<count_leafnode(head)<<endl;
}