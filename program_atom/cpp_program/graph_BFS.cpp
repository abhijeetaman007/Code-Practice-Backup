#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[],int v,int s,bool visited[])
{
  // test[1]=true;
  // cout<<test[1]<<endl;
  queue<int> q;
  q.push(s);
  visited[s-1]=true;
  while(q.empty()==false)
  {
    int u=q.front();
    q.pop();
    cout<<u<<" ";
    for(int i=0;i<adj[u-1].size();i++)
    {
      //cout<<"u-1 is"<<u-1<<endl;
      //cout<<adj[u-1][i]<<endl;
      if(visited[adj[u-1][i]-1]==false)
      {
        visited[adj[u-1][i]-1]=true;
      //  cout<<"pushed element is"<<adj[u-1][i];
        q.push(adj[u-1][i]);
      }
    }
  }
}



int main(){
  int v,e;
  cin>>v>>e;
  int t=e;
  vector<int> adj[v];
  int a,b;
  while(t--)
  {
    cin>>a>>b;
    adj[a-1].push_back(b);
    adj[b-1].push_back(a);
  }
  for(int i=0;i<v;i++)
  sort(adj[i].begin(),adj[i].end());
//  bool test[v]={false};
  bool visited[v]={false};
  //cout<<test[1]<<endl;
  int count=0;
  for(int i=0;i<v;i++)
  {
    if(visited[i]==false)
    {
      count+=1;
      BFS(adj,v,i+1,visited);
    }
  }
  cout<<"Count is"<<count<<endl;

}
