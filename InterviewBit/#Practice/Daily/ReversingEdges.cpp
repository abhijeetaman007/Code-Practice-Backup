//01 BFS
#include<bits/stdc++.h>
using namespace std;
class comp
{
	public:
		bool operator()(pair<int,int> p1,pair<int,int> p2)
	{
		return p1.first>p2.first;
	}
};

int main()
{
	int v,e;
	cin>>v>>e;
	vector<pair<int,int> > adj[v];
	vector<bool> visit(v,false);
	for(int i=0;i<e;i++)
	{	
		int a,b;
		cin>>a>>b;
		if(a!=b)
		{
			adj[a-1].push_back({0,b-1});
			adj[b-1].push_back({1,a-1});
		}
	}
	priority_queue<pair<int,int>,vector<pair<int,int> >,comp > q;
	vector<int>ans(v,INT_MAX);
	pair<int,int> p;
	q.push({0,0});
	visit[0]=0;
	while(!q.empty())
	{
		pair<int,int> src=q.top();
		q.pop();
		visit[src.second]=true;
		cout<<"Src is "<<src.second<<endl;
		cout<<"cost is "<<src.first<<endl;
		ans[src.second]=min(src.first,ans[src.second]);
		for(int i=0;i<adj[src.second].size();i++)
		{
			if(!visit[adj[src.second][i].second])
			{
				q.push({src.first+adj[src.second][i].first,adj[src.second][i].second});
			}
		}
	}
	for(int i=0;i<v;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	cout<<"Final"<<endl;
	cout<<ans.back()<<endl;
}