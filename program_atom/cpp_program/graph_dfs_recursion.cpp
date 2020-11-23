#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[],bool visited[],int s)
{
  //cout<<"DFS called"<<endl;
  cout<<s<<" ";
  visited[s-1]=true;
  for(int i=0;i<adj[s-1].size();i++)
  {
    int a=adj[s-1][i];
    //cout<<a<<endl;
    if(visited[a-1]==false)
    DFS(adj,visited,a);
  }
}

int main()
{
  int v,e;
  cin>>v>>e;
  int t=e,a,b;
  vector<int> adj[v];
  while(t--)
  {
      //cout<<t<<endl;
      cin>>a>>b;
      adj[a-1].push_back(b);
      adj[b-1].push_back(a);
  }
  for(int i=0;i<v;i++)
  sort(adj[i].begin(),adj[i].end());

  bool visited[v]={false};
  for(int i=0;i<v;i++)
  {
    if(visited[i]==false)
    DFS(adj,visited,i+1) ;
  }
}
