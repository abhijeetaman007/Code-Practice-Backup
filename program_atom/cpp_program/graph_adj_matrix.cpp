#include<bits/stdc++.h>
using namespace std;
int main()
{
  int v,e;
  char c;
  cin>>v>>e>>c;
  int t=e;
  int arr[v][v]={};
  int a=0,b=0;

  if(c=='D')
  {
    while(t--)
    {
        cin>>a>>b;
        arr[a-1][b-1]=1;
    }
  }
  if(c=='U')
  {
    while(t--)
    {
      cin>>a>>b;
      arr[a-1][b-1]=1;
      arr[b-1][a-1]=1;
    }
  }
  for(int i=0;i<v;i++)
  {
    for(int j=0;j<v;j++)
    {
      cout<<arr[i][j];
    }
    cout<<"\n";
  }

}
