#include<bits/stdc++.h>
using namespace std;

int BFS(vector<int> adj[],int v,int s,bool visited[],vector<int> &money)
{
  queue<int> q;
  int min=INT_MAX;
  q.push(s);
  visited[s-1]=true;
  while(q.empty()==false)
  {
    int u=q.front();
    q.pop();
    if(min>money[u-1])
       min=money[u-1];

    for(int i=0;i<adj[u-1].size();i++)
    {
      if(visited[adj[u-1][i]-1]==false)
      {
        visited[adj[u-1][i]-1]=true;
        
        q.push(adj[u-1][i]);
      }
    }
  }
  return min;
}



int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int v,e;
  cin>>v>>e;
  vector<int> adj[v];
  int a,b,sum=0,s=0;
  vector<int> money(v);
  for(int i=0;i<v;i++)
  	cin>>money[i];
  while(e--)
  {
    cin>>a>>b;
    adj[a-1].push_back(b);
    adj[b-1].push_back(a);
  }
  bool visited[v]={false};
  for(int i=0;i<v;i++)
  {

    if(visited[i]==false)
    {
      s=BFS(adj,v,i+1,visited,money);
      sum=sum+s;
    }	
    
  }
 cout<<sum<<endl;
}
