#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
	TreeNode* left;
	TreeNode* right;
	int val;
};
TreeNode *head=NULL;
TreeNode* createBT()
{
	TreeNode* newnode=new TreeNode;
	cout<<"Enter data to be entered"<<endl;
	int x;
	cin>>x;
	if(x==-1)
		return NULL;
	newnode->val=x;		
	cout<<"Moving towards left of "<<x<<endl;
	newnode->left=createBT();
	cout<<"Moving towards right of "<<x<<endl;
	newnode->right=createBT();
	return newnode;
}
void preorder(TreeNode* root)
{
	if(root==NULL)
		return;
	cout<<root->val<<" ";
	preorder(root->right);
	preorder(root->left);
}
int main()
{
	head=createBT();
	cout<<"test"<<endl;
	preorder(head);
}