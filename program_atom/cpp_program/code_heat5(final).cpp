#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int m;
    cin>>m;
    vector<int> p,z;
    for(int i=0;i<m;i++)
    {
      int a;
      cin>>a;
      p.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
      int a;
      cin>>a;
      z.push_back(a);
    }
    int j=0,sum=0,count=0;
    int min=p[0];
    for(int i=0;i<m;i++)
    {
      if(min>p[i])
      {
        sum=(count*p[j])+sum;
        min=p[i];
        j=i;
        i=i-1;
        count=0;
      }
      else
      {
          count=count+z[i];
      }
    }
    sum=(count*p[j])+sum;
    cout<<sum<<endl;
  }
}
