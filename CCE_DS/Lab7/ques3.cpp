//Deleting node
#include<iostream>
using namespace std;
class TreeNode                 //Tree node structure
{
public:
	int val;
	TreeNode* left;
	TreeNode* right;
};
TreeNode *head=NULL;

TreeNode* createBT()          //Creating BT using recursion
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

TreeNode* deleteBST(TreeNode* root,int x)            //Deleting node  from BST 
{ 

	if(root==NULL)
	{
		return root;
	}

	if(root->val==x)
	{
		if(root->right==NULL && root->left==NULL)
		{
			delete  root;
			return NULL;
		}	
		else
		{
			if(root->right==NULL || root->left==NULL)
			{
				TreeNode *temp;
				if(root->left)
					temp=root->left;
				else
					temp=root->right;
				delete root;
				return temp;	
			}
			else
			{
				TreeNode* t=root,*prev;
				while(t->left!=NULL){
					prev=t;
					t=t->left;

				}
				cout<<"floor we got is "<<t->val<<endl;				
				int temp=root->val;
				root->val=t->val;
				t->val=temp;
				cout<<"floor we got is "<<t->val<<endl;
				prev->left=NULL;
				// if(t->right==NULL && t->left==NULL)
				// {
				// 	cout<<"inside"<<endl;
				// 	delete t;
				// }
				// else
				// {
				// 	TreeNode *y=t->right;
				// 	delete t;
				// }
				delete t;
				return root;
			}
		}
	}

	if(root->val>x)
	{
		root->left=deleteBST(root->left,x);
	}
	else
	{
		root->right=deleteBST(root->right,x);
	}
	return root;
}

void inorder(TreeNode* root)    //Printing inorder using recursion
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
	int x;
	cout<<"Enter Element to be deleted "<<endl;
	cin>>x;
	deleteBST(head,x);
	cout<<"value is "<<head->val<<endl;
	cout<<"next val "<<head->left->val<<endl;
	inorder(head);
}