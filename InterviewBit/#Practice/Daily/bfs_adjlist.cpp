#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int> adj[],int v,vector<vector<int> >g,int src)
{
	vector<int> visit(v,false);
	visit[src]=true;
	queue<int> q;
	q.push(src);
	while(!q.empty())
	{
		src=q.front();
		cout<<src<<" ";
		q.pop();
		for(int i=0;i<adj[src].size();i++)
		{
			if(!visit[adj[src][i]])
			{
				visit[adj[src][i]]=true;
				q.push(adj[src][i]);
			}			
		}
	}

}
int main()
{
	int v,e;
	cout<<"Vertices and Edges :"<<endl;
	cin>>v>>e;
	vector<vector<int> > g(v,vector<int> (v,0));
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
	bfs(adj,v,g,src);
}