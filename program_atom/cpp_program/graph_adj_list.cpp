//Here graph is sorted
//Take care to avoid duplicates
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int v,e;
  char c;
  cin>>v>>e>>c;
  int t=e;
  vector<int> arr[v];
  int a,b;
  if(c=='D')
  {
    while(t--)
    {
      int f1=0;
      cin>>a>>b;
      for(int i=0;i<arr[a-1].size();i++)
      {
        if(arr[a-1][i]==b)
        {
          f1=1;
          break;
        }
      }
    //  cout<<f1<<endl;
      if(f1==0)
      arr[a-1].push_back(b);
    }
  }
  if(c=='U')
  {
    while(t--)
    {
      int f1=0;
      int f2=0;
      cin>>a>>b;
      for(int i=0;i<arr[a-1].size();i++)
      {
        if(arr[a-1][i]==b)
        {
          f1=1;
          break;
        }
      }
      //cout<<f1<<endl;
      if(f1==0)
      arr[a-1].push_back(b);
      for(int i=0;i<arr[b-1].size();i++)
      {
        if(arr[b-1][i]==a)
        {
          f2=1;
          break;
        }
      }
      //cout<<f2<<endl;
      if(f2==0)
      arr[b-1].push_back(a);
    }
  }
  for(int i=0;i<v;i++)
  {
    sort(arr[i].begin(),arr[i].end());
    cout<<i+1<<" ";
    for(int j=0;j<arr[i].size();j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
  // cout<<arr[0][0]<<endl;
  // cout<<arr[1][0]<<endl;
}
