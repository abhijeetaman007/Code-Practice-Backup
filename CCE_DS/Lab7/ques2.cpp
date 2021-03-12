//Insert in BST
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

TreeNode* createBT()            //Creating BST using recursion
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

TreeNode* insertnode(TreeNode* root, int x)          //Inserting node in BST
{
	if(root==NULL)
	{
		TreeNode *n=new TreeNode;
		n->val=x;
		return n;
	}
	if(x>root->val)
	{
		root->right=insertnode(root->right,x);
	}
	else
	{
		root->left=insertnode(root->left,x);
	}
	return root;
}

void inorder(TreeNode* root)       //Inorder Traversal 
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
	insertnode(head,8);
	inorder(head);
}