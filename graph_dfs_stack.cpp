#include<bits/stdc++.h>
using namespace std;

int main()
{
  int v,e;
  cin>>v>>e;
  int temp=e,a,b;
  vector<int> adj[v];
  while(temp--)
  {
      //cout<<t<<endl;
      cin>>a>>b;
      adj[a-1].push_back(b);
      adj[b-1].push_back(a);
  }
  for(int i=0;i<v;i++)
  sort(adj[i].begin(),adj[i].end());
  bool visited[v]={false};
  stack<int> s;
  vector<int> v1;
  //for(int k=0;k<v;k++)
  //{
    //if(visited[k]==false){
  s.push(1);
  cout<<s.top()<<" ";
  visited[0]=true;
  while(s.empty()==false)
  {
    int t=s.top(),c=0;
    for(int i=0;i<adj[t-1].size();i++)
    {
      //flag=0;<<
      //cout<<"t is "<<t<<endl;
      //cout<<"element is "<<adj[t-1][i]<<endl;
      //cout<<"visited"<<visited[adj[t-1][i]-1]<<endl;
      if(visited[adj[t-1][i]-1]==false)
      {
          s.push(adj[t-1][i]);
          cout<<s.top()<<" ";
          visited[adj[t-1][i]-1]=true;
          //flag=1;
          break;
      }
      else
      {
        c=c+1;
        //continue;
      }
      if(s.empty()==true)
      break;
      // else
      // {
      //   t=s.top();
      //   if(flag==1)
      //   i=0;
      // }
    //  cout<<"size is"<<adj[t-1].size()<<endl;
      //cout<<"c is"<<c<<endl;
      if(adj[t-1].size()==c){
        int x=s.top();
  //      cout<<"element poped "<<s.top()<<endl;
        s.pop();
        v1.push_back(x);
      }
    }
  }
  for(int i=0;i<v;i++)
  {
    if(visited[i]==false)
    {
      cout<<(i+1)<<" ";
      v1.push_back(i+1);
    }
  }
  cout<<"\n";
//  cout<<"TEST1"<<endl;
  for(int i=0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }
  cout<<"\n";
// cout<<"test2"<<endl;


}
