#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    int n,a;
    cin>>n;
    vector<int> v;
    bool visited[n]={false};
    for(int i=0;i<2*n;i++)
    {
      cin>>a;
      //cout<<"bool is"<<visited[a-1]<<endl;
      if(visited[a-1]==false)
      {
        v.push_back(a);
        visited[a-1]=true;
      }
      else
      continue;
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<"\n";
  }
}
