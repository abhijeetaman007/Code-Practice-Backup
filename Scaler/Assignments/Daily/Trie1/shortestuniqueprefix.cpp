//correctly implemented count -- count should be stored in child

#include<bits/stdc++.h>
using namespace std;

class TrieNode
{
public:	
	TrieNode *child[26];
	int c;
	bool isEnd;
};

TrieNode* getNode()
{
	TrieNode* temp=new TrieNode;
	for(int i=0;i<26;i++)
	{
		temp->child[i]=NULL;
	}
	temp->c=1;
	temp->isEnd=false;
	return temp;
}

void insert(TrieNode* root,string str)
{
	TrieNode* temp=root;
	for(int i=0;i<str.length();i++)
	{
		if(temp->child[str[i]-'a']==NULL)
		{
			temp->child[str[i]-'a']=getNode();
		}
		else
		{
			temp->child[str[i]-'a']->c+=1;
		}
		temp=temp->child[str[i]-'a'];
	}
}



int main()
{
	int n;
	cin>>n;
	vector<string> v(n);
	TrieNode* root=getNode();
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		insert(root,v[i]);
	}

	vector<string> ans;
	
	for(int i=0;i<n;i++)
	{
		string a;
		TrieNode *temp=root;
		cout<<"v[i]: "<<v[i]<<endl;
		for(int j=0;j<v[i].size();j++)
		{
			cout<<"count is "<<temp->c<<endl;
				if(temp->child[v[i][j]-'a']->c==1)
				{
					a=a+v[i][j];
					ans.push_back(a);
					break;
				}
				else{
					a=a+v[i][j];
				}
				temp=temp->child[v[i][j]-'a'];
		}		
	}


	cout<<endl;
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;

}