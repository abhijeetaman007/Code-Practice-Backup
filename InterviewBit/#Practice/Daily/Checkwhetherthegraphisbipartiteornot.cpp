#include<bits/stdc++.h>
using namespace std;
void dfs(int src,vector<int> adj[],vector<int> &color,bool &ans)
{
	cout<<"dfs"<<endl;
	cout<<"src"<<src<<endl;
	if(!ans)
		return;
	for(int i=0;i<adj[src].size();i++)
	{
		if(color[adj[src][i]]==-1)
		{
			if(color[src]==1)
			{
				cout<<"inside1"<<endl;
				cout<<"src"<<src<<endl;
				cout<<"adj"<<adj[src][i]<<endl;
				color[adj[src][i]]=0;	
			}
			else
			{
				cout<<"inside2"<<endl;
				cout<<"src"<<src<<endl;
				cout<<"adj"<<adj[src][i]<<endl;
				color[adj[src][i]]=1;	
			}
			dfs(adj[src][i],adj,color,ans);
		}
		else
		{
			if(color[adj[src][i]]!=((color[src])^1))
			{
				ans=false;
				return;
			}
		}
	}
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
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<int> color(v,-1);
	bool ans=true;
	for(int i=0;i<v;i++)
	{
		if(color[i]==-1)
		{
			cout<<"calling"<<endl;
			for(int i=0;i<v;i++)
			{
				cout<<color[i]<<" ";	
			}
			color[i]=1;
			dfs(i,adj,color,ans);
			if(!ans)
			break;
		}
	}
	for(int i=0;i<v;i++)
	{
		cout<<color[i]<<" ";	
	}
	cout<<"Final Ans is "<<ans<<endl;
}