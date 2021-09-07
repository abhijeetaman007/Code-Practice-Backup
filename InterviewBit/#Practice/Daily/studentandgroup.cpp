#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],int n,int src,vector<bool> &visit,int &mx,int lvl)
{
	mx=max(mx,lvl);
	visit[src]=true;
	for(int i=0;i<adj[src].size();i++)
	{
		if(!visit[adj[src][i]])
		dfs(adj,n,adj[src][i],visit,mx,lvl+1);
	}
}


int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	vector<bool> visit(n,false);
	vector<int> adj[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=0;i<n;i++)
	{
		if(v[i]!=-1)
		{
			adj[v[i]].push_back(i);
		}
	}
	int mx=0;
	int lvl=1;
	for(int i=0;i<n;i++)
	{
		if(!visit[i])
		dfs(adj,n,i,visit,mx,lvl);

	}
	cout<<"Final ans is "<<mx<<endl;
}