#include<bits/stdc++.h>
using namespace std;
void bfs(int src,vector<vector<int> >&g,int v)
{
	vector<bool> visit(v,false);
	visit[src]=true;
	queue<int> q;
	q.push(src);
	while(!q.empty())
	{
		src=q.front();
		q.pop();
		cout<<src<<" ";
		for(int i=0;i<g[src].size();i++)
		{
			if(g[src][i]!=0 && !visit[i])
			{
				q.push(i);
				visit[i]=true;
			}
		}
	}
}



int main()
{
	cout<<"Vertices and Edges "<<endl;
	int v,e;
	cin>>v>>e;
	vector<vector<int> > g(v,vector<int>(v,0));
	for(int i=0;i<v;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a][b]=1;
		g[b][a]=1;
	}
	int src;
	cin>>src;
	bfs(src,g,v);
}