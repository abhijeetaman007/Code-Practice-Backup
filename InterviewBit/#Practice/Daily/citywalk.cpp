#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
void dfs(int src,vector<int> adj[],int v,int e,vector<bool> &visit,stack<int> &s)
{
	deb("dfs");
	visit[src]=true;
	int size=adj[src].size();
	for(int i=0;i<size;i++)
	{
		if(!visit[adj[src][i]])
		{
			dfs(adj[src][i],adj,v,e,visit,s);
		}
	}
	cout<<"pushing "<<src<<endl;
	s.push(src);
}


int main()
{
	int v,e;
	cin>>v>>e;
	vector<int> adj[v];
	vector<int> adj1[v];
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a-1].push_back(b-1);
		adj1[b-1].push_back(a-1);
	}
	vector<bool> visit(v,false);
	stack<int> s;
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<adj[i].size();j++)
		{
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
	deb("adj2");
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<adj1[i].size();j++)
		{
			cout<<adj1[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<v;i++)
	{
		if(!visit[i])
		{
			dfs(i,adj,v,e,visit,s);
		}
	}
	cout<<"dfs done"<<endl;
	cout<<"visit refresh"<<endl;
	for(int i=0;i<v;i++)
	{
		visit[i]=false;
	}
	vector<int> ans(v,0);

	
	deb("calling again");
	while(!s.empty())
	{
		int src=s.top();
		s.pop();
		stack<int> s1;
		if(!visit[src])
		dfs(src,adj1,v,e,visit,s1);
		if(s1.size()>2)
		{
			while(!s1.empty())
			{
				int x=s1.top();
				deb(src);
				deb(x);
				s1.pop();
				ans[x]=1;
			}
		}
		else{
			deb(src);
			deb("not in ans");
		}
	}
	cout<<"Final Ans "<<endl;
	for(int i=0;i<v;i++)
	{
		cout<<ans[i]<<" ";
	}
}