#include<bits/stdc++.h>
using namespace std;
class TrieNode
{
	public:
		std::vector<TrieNode*> v;
		map<char,TrieNode**> m;
		bool isEnd;
};
std::vector<string> arr;

TrieNode* getNode()
{
	TrieNode* temp=new TrieNode;
	temp->isEnd=false;
	return temp;
}
bool compare(pair<string,int> a,pair<string,int> b)
{
	return a.second>b.second;
}

void insert(TrieNode* root,string str)
{
	TrieNode* temp=root;
	for(int i=0;i<str.size();i++)
	{
		if((temp->m).find(str[i])==temp->m.end())
		{
			TrieNode* n=getNode();
			temp->v.push_back(n);
			// int *
			temp->m[str[i]]=&(temp->v[temp->v.size()-1]);
		}
		else
			temp=*(temp->m[str[i]]);
	}
	temp->isEnd=false;
}

void solve(TrieNode* root,string str)
{
	if(root->isEnd==true)
	{
		arr.push_back(str);
		return;
	}
	for(int i=0;i<root->v.size();i++)
	{
		str=str+root->v[i]->
		solve()
	}
}


bool search(TrieNode* root,string s)
{
	string ans;
	for(int i=0;i<s.size();i++)
	{
		if((temp->m).find(str[i])==temp->m.end())
			return false;
		temp=*(temp->m[str[i]]);
	}
	ans=str;

}




int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		std::vector<pair<string,int> > a(n);
		std::vector<string> b(m);
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
			insert(root,a[i].first);
		}
		std::vector<vector<string> > v;
		for(int i=0;i<m;i++)
		{
			search(root,b[i]);
			v.push_back(arr);
			arr.clear();
		}
	}


}