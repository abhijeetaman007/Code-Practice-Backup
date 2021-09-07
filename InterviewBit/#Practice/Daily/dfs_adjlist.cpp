#include<bits/stdc++.h>
using namespace std;
void dfs(int src,vector<bool> &visit,vector<int> adj[])
{
	cout<<src<<" ";
	visit[src]=true;
	for(int i=0;i<adj[src].size();i++)
	{
		if(!visit[adj[src][i]])
		{
			dfs(adj[src][i],visit,adj);
		}
	}
}



int main()
{
	int v,e;
	cout<<"Vertices and Edges"<<endl;
	cin>>v>>e;
	vector<int> adj[v];
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int src;
	cout<<"source:"<<endl;
	cin>>src;
	vector<bool>visit(v,false);
	dfs(src,visit,adj);
}