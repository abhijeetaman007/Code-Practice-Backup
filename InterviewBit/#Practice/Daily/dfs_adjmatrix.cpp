#include<bits/stdc++.h>
using namespace std;
void dfs(int src,vector<bool> &visit,vector<vector<int> > &g)
{
	cout<<src<<" ";
	visit[src]=true;
	for(int i=0;i<g[src].size();i++)
	{
		if(g[src][i]!=0)
		{
			if(!visit[i])
			{
				dfs(i,visit,g);
			}
		}
	}
}


int main()
{
	int v,e;
	cout<<"Enter vertices edges "<<endl;
	cin>>v>>e;
	vector<vector<int> > g(v,vector<int> (v,0));
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a][b]=1;
		g[b][a]=1;
	}
	cout<<"source"<<endl;
	int src;
	cin>>src;
	vector<bool> visit(v,false);
	dfs(src,visit,g);
}-