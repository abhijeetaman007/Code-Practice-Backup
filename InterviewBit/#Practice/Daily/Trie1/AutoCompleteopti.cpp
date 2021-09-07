#include<bits/stdc++.h>
using namespace std;

bool compare(pair<string,int> a,pair<string,int> b)
{
	return a.second>b.second;
}

class TrieNode
{
public:
	TrieNode* child[26];
	bool isEnd;
	vector<int> v;
};

TrieNode* getNode()
{
	TrieNode* temp=new TrieNode;
	for(int i=0;i<26;i++)
	{
		temp->child[i]=NULL;
	}
	temp->isEnd=false;
	return temp;
}

void insert(TrieNode* root,string s,int idx)
{
	TrieNode* temp=root;
	for(int i=0;i<s.size();i++)
	{
		if(temp->child[s[i]-'a']==NULL)
		{
			temp->child[s[i]-'a']=getNode();
		}
		if(temp->child[s[i]-'a']->v.size()<=5)
		temp->child[s[i]-'a']->v.push_back(idx);
		temp=temp->child[s[i]-'a'];			
	}
	temp->isEnd=true;
}

vector<int> search(TrieNode* root,string s)
{
	TrieNode* temp=root;
	for(int i=0;i<s.size();i++)
	{
		if(temp->child[s[i]-'a']==NULL)
		{
			std::vector<int> v;
			v.push_back(-1);
			return v;
		}
		temp=temp->child[s[i]-'a'];
	}
	return temp->v;
}



int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<pair<string,int> > a(n);
		vector<string> b(m);
		for(int i=0;i<n;i++)
		{
			cin>>a[i].first;
		}
		for(int i=0;i<n;i++)
		{
			cin>>a[i].second;
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}

		sort(a.begin(),a.end(),compare);

		TrieNode* root=new TrieNode;
		for(int i=0;i<n;i++)
		{
			insert(root,a[i].first,i);
		}
		vector<vector<int> > ans;
		for(int i=0;i<m;i++)
		{
			ans.push_back(search(root,b[i]));
		}
		for(int i=0;i<ans.size();i++)
		{
			for(int j=0;j<ans[i].size();j++)
			{
				if(ans[i][j]!=-1 && j!=ans[i].size()-1)
				cout<<a[ans[i][j]].first<<" ";
				else if(ans[i][j]!=-1 )
				cout<<a[ans[i][j]].first<<" ";
				else
					cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	

}