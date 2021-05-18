#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
	public:
		int val;
		TreeNode* left;
		TreeNode* right;
}; 

TreeNode* getNode()
{
	TreeNode* n;
	n=new TreeNode;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void createBT(TreeNode* root,int x)
{
	int a;
	root->val=x;
	cout<<"Enter Element to be entered left of "<<x<<endl;
	cin>>a;
	if(a!=-1){
		root->left=getNode();
		createBT(root->left,a);
	}
	cout<<"Enter Element to be entered right of "<<x<<endl;
	cin>>a;
	if(a!=-1){
		root->right=getNode();
		createBT(root->right,a);
	}
}

void inorder(TreeNode* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}

int main()
{
	TreeNode* root=getNode();
	cout<<"Enter root element"<<endl;
	int x;
	cin>>x;
	createBT(root,x);
	inorder(root);
	cout<<"iter"<<endl;
	stack<TreeNode*> s;
	TreeNode* temp=root;
	while(!s.empty() || temp!=NULL)
	{
		if(temp!=NULL)
		{
			cout<<temp->val<<" ";
			s.push(temp);
			temp=temp->left;
		}
		else
		{
			temp=s.top();
			s.pop();
			temp=temp->right;

		}
	}
	cout<<"iterative inorder "<<endl;
	temp=root;
	while(!s.empty() || temp!=NULL)
	{
		if(temp!=NULL)
		{
			s.push(temp);
			temp=temp->left;
		}
		else
		{
			temp=s.top();
			cout<<temp->val<<" ";
			s.pop();
			temp=temp->right;
		}
	}
	cout<<"iterative postorder "<<endl;
	stack<TreeNode*> s1,s2;
	
	s1.push(root);
	while(!s1.empty())
	{
		temp=s1.top();
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