//Search
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

TreeNode* createBT()    //Creating BT using recursion
{

	cout<<"Enter Element "<<endl;
	int x;
	cin>>x;
	if(x==-1)
		return NULL;
	
	TreeNode* n=new TreeNode;
	if(head==NULL)
		head=n;
	n->val=x;
	cout<<"Going left of "<<x<<endl;	
	n->left=createBT();
	cout<<"Going right of "<<x<<endl;	
	n->right=createBT();
	return n;
}

bool search(TreeNode* root,int x)    //Searching in BST
{
	if(root==NULL)
	{
		return false;
	}
	if(root->val==x)
	{
		return true;
	}
	return search(root->left,x) || search(root->right,x);
}

void inorder(TreeNode* root)    //Printing Inorder
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);

}


int main()
{
	createBT();
	cout<<search(head,9)<<endl;
	inorder(head);
}