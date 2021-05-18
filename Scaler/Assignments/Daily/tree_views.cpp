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
	TreeNode* n=new TreeNode;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void createBT(TreeNode* root,int val)
{
	int x;
	cout<<"Enter value to be entered in left node "<<val<<endl;
	cin>>x;
	if(x!=-1){
		root->left=getNode();
		root->left->val=x;
		createBT(root->left,x);
	}
	cout<<"Enter value to be entered in right node "<<val<<endl;
	cin>>x;
	if(x!=-1){
		root->right=getNode();
		root->right->val=x;
		createBT(root->right,x);
	}
}

void verticalorder(TreeNode* root,int x,map<int,vector<int> > &m)
{
	if(root==NULL)
		return;
	cout<<"x is "<<x<<endl;
	m[x].push_back(root->val);
	verticalorder(root->left,x-1,m);
	verticalorder(root->right,x+1,m);
}

void verticalitr(TreeNode* root,map<int,vector<int> >&m)
{
	queue<pair<TreeNode*,int> > q;
	if(root!=NULL)
	{
		q.push({root,0});
		while(!q.empty())
		{
			TreeNode* temp=q.front().first;
			int idx=q.front().second;
			cout<<"temp->val"<< temp->val <<endl;
			m[idx].push_back(temp->val);
			q.pop();
			if(temp->left)q.push({temp->left,idx-1});
			if(temp->right)q.push({temp->right,idx+1});
		}
	}
}

void distanceNodes(TreeNode* root,int x,vector<int> &v)
{
	cout<<"Val is "<<root->val<<endl;
	v.push_back(root->val);
	if(root->val==x)
	{
		return;
	}
	if(root->val<x)
	{
		distanceNodes(root->right,x,v);
	}
	else
	{
		distanceNodes(root->left,x,v);
	}
}

bool LCA(TreeNode* root,int x,vector<int> &v)
{
	if(root==NULL)
		return false;
	if(root->val==x){
		v.push_back(root->val);
		return true;
	}
	if(LCA(root->left,x,v)||LCA(root->right,x,v))
	{
		v.push_back(root->val);
		return true;
	}
	return false;
}


int main()
{
	// map<int,vector<int> > m;
	TreeNode* root=getNode();
	cout<<"Enter Root"<<endl;
	int x;
	cin>>x;
	root->val=x;
	createBT(root,x);
	// verticalorder(root,0,m);
	// verticalitr(root,m);
	// for(auto itr=m.begin();itr!=m.end();itr++)
	// {
		// cout<<"in"<<endl;
		// vector<int>v=itr->second;
		// for(int i=0;i<v.size();i++)
		// {
			// cout<<v[i]<<" ";
		// }
		// cout<<endl;
	// }
	int m,n;
	cin>>m>>n;
	vector<int> a;
	vector<int> b;
	// TreeNode* root=get;
	// distanceNodes(root,m,a);
	// distanceNodes(root,n,b);
	// int ans;
	// cout<<"a"<<endl;
	// for(int i=0;i<a.size();i++)
		// cout<<a[i]<<" ";
	// cout<<"b"<<endl;
	// for(int i=0;i<b.size();i++)
		// cout<<b[i]<<" ";
	// int i=0,j=0;
	
	// while(i!=a.size() && j!=b.size())
	// {
	// 	if(a[i]==b[j])
	// 	{
	// 		i++;
	// 		j++;
	// 	}
	// 	else
	// 	{
	// 		break;
	// 	}
	// }
	// cout<<"i is "<<i<<endl;
	// cout<<"j is "<<j<<endl;
	// ans=(a.size()-i)+(b.size()-j)+1;
	// cout<<ans<<endl;
	LCA(root,m,a);
	LCA(root,n,b);
	cout<<"a"<<endl;
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<"b"<<endl;
	for(int i=0;i<b.size();i++)
		cout<<b[i]<<" ";

	int i=0,j=0;
	int ans;
	cout<<"inside"<<endl;
	while(i!=a.size() && j!=b.size())
	{
		cout<<a[i]<<" "<<b[j]<<" "<<endl;
		if(a[i]==b[j])
		{
			ans=a[i];
			break;
		}
		i++;
		j++;
	}	
	cout<<ans<<endl;
}