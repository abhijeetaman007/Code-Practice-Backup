// 5 5
// 0 2
// 0 3
// 2 3
// 1 3
// 1 4

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v,e;
	cout<<"Enter vertices and edges "<<endl;
	cin>>v>>e;
	int graph[v][v];
	int a,b;
	int indegree[v];
	for(int i=0;i<v;i++)
		indegree[i]=0;
		
	for(int i=0;i<v;i++)
		for(int j=0;j<v;j++)
			graph[i][j]=0;

	for(int i=0;i<e;i++)
	{
		cin>>a>>b;
		graph[a][b]=1;
		indegree[b]++;
	}
	queue<int> q;
	for(int i=0;i<v;i++)
	{
		if(indegree[i]==0)
			q.push(i);
	}
	cout<<"Topological sort : "<<endl;
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		for(int i=0;i<v;i++)
		{
			if(graph[x][i]!=0)
			{
				indegree[i]--;
				if(indegree[i]==0)
				{
					q.push(i);
				}
			}
		}
	}

}