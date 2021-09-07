//Khan's algorithm
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v,e;
	cin>>v>>e;
	vector<int> adj[v];
	vector<int> indegree(v);
	set<int> s;
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a-1].push_back(b-1);
		indegree[b-1]++;
	}
	for(int i=0;i<v;i++)
	{
		cout<<indegree[i]<<" ";
	}
	cout<<endl;
	int c=0;
	for(int i=0;i<v;i++)
	{
		if(indegree[i]==0){
			s.insert(i);
			c++;
		}
	}
	vector<int> ans;
	cout<<"size is "<<s.size()<<endl;
	cout<<"set :"<<endl;
	for(auto itr=s.begin();itr!=s.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	while(!s.empty())
	{
		cout<<"size is "<<s.size()<<endl;
		int src = *(s.begin());
		cout<<"src"<<src<<endl;
		s.erase(s.begin());
		ans.push_back(src+1);
		int flag=0;
		for(int i=0;i<adj[src].size();i++)
		{
			indegree[adj[src][i]]--;
			cout<<adj[src][i]<<" ";
			cout<<indegree[adj[src][i]]<<endl;
			if(indegree[adj[src][i]]==0)
			{
				flag=1;
				cout<<"inserting "<<i<<endl;
				s.insert(adj[src][i]);
				c++;
			}			
		}
		// if(flag==0){
		// 	ans.clear();
		// 	break;
		// }
		cout<<"set :"<<endl;
		for(auto itr=s.begin();itr!=s.end();itr++)
		{
			cout<<*itr<<" ";
		}
		cout<<endl;

	}
	if(c<v)
	{
		cout<<"Cycle"<<endl;
	}
	else
	{
		cout<<"Ans is "<<endl;
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";	
	}
	
}