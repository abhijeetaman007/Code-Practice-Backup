#include<bits/stdc++.h>
using namespace std;
class TrieNode
{
public:	TrieNode* child[26];
	int c;
	bool isEnd;
};

TrieNode* getNode()
{
	TrieNode* n=new TrieNode;
	for(int i=0;i<26;i++)
		n->child[i]=NULL;
	n->isEnd=false;
	n->c=1;
	return n;
}

void insert(TrieNode *root,string str)
{
	TrieNode* temp=root;
	for(int i=0;i<str.size();i++)
	{
		if(temp->child[str[i]-'a']==NULL)
		{
			temp->child[str[i]-'a']=getNode();	
		}
		else
		temp->child[str[i]-'a']->c+=1;	
	temp=temp->child[str[i]-'a'];
	}
	temp->isEnd=true;
}

int search(TrieNode* root,string str)
{
	if(root==NULL)
	return 0;
	TrieNode* temp=root;
	for(int i=0;i<str.size();i++)
	{
		if(temp->child[str[i]-'a']==NULL)
			return 0;
		else{
			cout<<"in"<<endl;
			temp=temp->child[str[i]-'a'];
		}
	}
	return temp->c;
}


int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	vector<string> b(n);
	std::vector<int> ans;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	TrieNode* root=getNode();
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			insert(root,b[i]);
		}
		else if(a[i]==1)
			{
				cout<<"str : "<<b[i]<<" "<<search(root,b[i])<<endl;
				ans.push_back(search(root,b[i]));
			}
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}

}