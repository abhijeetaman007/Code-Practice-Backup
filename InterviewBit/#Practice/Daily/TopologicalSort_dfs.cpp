#include<bits/stdc++.h>
using namespace std;
void dfs(int src,vector<int> adj[],vector<bool> &visit, stack<int> &s)
{
	cout<<"dfs"<<endl;
	cout<<"dfs"<<src;
	visit[src]=true;
	for(int i=0;i<adj[src].size();i++)
	{
		if(visit[adj[src][i]])
			dfs(adj[src][i],adj,visit,s);		
	}
	s.push(src);
}


int main()
{
	int v,e;
	cin>>v>>e;
	vector<int> adj[v];
	for(int i=0;i<e;i++)
	{
		int a,b;	
		cin>>a>>b;
		adj[a-1].push_back(b-1);	
	}
	stack<int> s;
	vector<bool> visit(v,false);
	for(int i=0;i<v;i++)
	{
		if(!visit[i])
		dfs(i,adj,visit,s);
	}
	int c=0;
	while(!s.empty())
	{
		c++;
		s.pop();
	}
	int ans=0;
	if(c==v)
	{
		ans=1;
	}
	cout<<"Final Ans"<<ans<<endl;
}