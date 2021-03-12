#include<iostream>
using namespace std;
class TreeNode                 //Tree node structure
{
public:
	int val;
	TreeNode* left;
	TreeNode* right;
};

TreeNode* head=NULL;

class Stack                  //Class Stack implementation using array
{
public :
	int size=100;
	TreeNode* a[100];
	int t=-1;
	bool isFull()               //To check whether stack is full or not
	{
		if(t+1==size)
			return true;
		return false;
	}
	bool isEmpty()              //To check whether full is full or not
	{
		if(t==-1)
			return true;
		return false;
	}
	void push(TreeNode* x)           //To push in stack
	{
		if(isFull()){
			cout<<"Stack is Full"<<endl;
			return;
		}
		a[++t]=x;
	}
	TreeNode* pop()                   //To pop in stack
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty pop"<<endl;
			return NULL;
		}
		TreeNode* x=a[t--];
		// top=top-1;
		return x;
	}
	TreeNode* top()                   //Returns top element of stack
	{
		if(isEmpty()){
			cout<<"Stack is Empty peek"<<endl;
			return NULL;
		}
		return a[t];
	}
	
};


class Queue                //Class Queue implementation using array
{
public:
	int size=100;
	TreeNode* a[100];
	int f=-1;
	int r=-1;

	void enque(TreeNode* x)     //To enque in Queue
	{
		if(r+1==size)
		{
			cout<<"Queue is full "<<endl;
		}
		a[++r]=x;
		if(f==-1)
			f=0;
	}
	void deque()                 //To deque in Queue
	{
		if(f==-1)
		{
			cout<<"Queue is empty "<<endl;
		}
		else if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			f++;
		}
	}
	TreeNode* peek()          //peek() returns front of queue
	{
		if(f==-1)
			return NULL;
		return a[f];
	}
	bool isEmpty()               //To check whether queue is empty
	{
		if(f==-1)
			return true;
		return false;
	}	
};

TreeNode* createNode(int x)       //Creates a new node of TreeNode type and sets val to  parameter x
{
	TreeNode* n=new TreeNode;
	n->left=NULL;
	n->right=NULL;
	n->val=x;
	return n;
}

void createBTiterative()        //Iteratively creating binary trees using queues
{

	int x;
	if(head==NULL)
	{
		cout<<"Input data for root node"<<endl;
		cin>>x;
		head=createNode(x);
	}
	Queue q;
	q.enque(head);

	while(!q.isEmpty())
	{
		cout<<"Enter left of "<<q.peek()->val<<endl;
		cin>>x;
		if(x!=-1)
		{
			TreeNode* n=createNode(x);
			q.peek()->left=n;
			q.enque(n);
		}
		cout<<"Enter right of "<<q.peek()->val<<endl;
		cin>>x;
		if(x!=-1)
		{
			TreeNode* n=createNode(x);
			q.peek()->right=n;
			q.enque(n);
		}
		q.deque();
	}
}

void preorder_iterative()                  //Using Stack to for iterative preorder traversal
{
	Stack s;
	TreeNode* curr=head;
	while(!s.isEmpty() || curr!=NULL)
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

void inorder_iterative()                 //Using Stack to for iterative inorder traversal
{
	Stack s;
	TreeNode* curr=head;
	while(curr!=NULL || !s.isEmpty())
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

void post_orderiterative()                         //Using Stack to for iterative postorder traversal
{
	Stack s1,s2;
	s1.push(head);
	while(!s1.isEmpty())
	{
		TreeNode* temp=s1.top();
		s1.pop();
		s2.push(temp);
		if(temp->left)s1.push(temp->left);
		if(temp->right)s1.push(temp->right);	
	}
	while(!s2.isEmpty())
	{
		cout<<s2.top()->val<<" ";
		s2.pop();
	}
}
int count_leafnode(TreeNode* root)            //Counting leafnode
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
	cout<<"Preorder :"<<endl;
	preorder_iterative();
	cout<<endl;
	cout<<"Inorder :"<<endl;
	inorder_iterative();
	cout<<endl;
	cout<<"Postorder :"<<endl;
	post_orderiterative();
	cout<<endl;
	cout<<"Total lead nodes are "<<count_leafnode(head)<<endl;
}