#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,a,c=1,flag=0;
    cin>>n>>m;
    vector<int> v,v1;
    for(int i=0;i<m;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=0;j<m;j++)
      {
        flag=1;
        if(v[j]==i)
        {
          flag=0;
          break;
        }
        flag=1;
      }
      if(flag==1)
      {
        if((c%2)!=0)
        cout<<i<<" ";
        else
        v1.push_back(i);
        c++;
      }
    }
    cout<<endl;
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<endl;
  }
}
