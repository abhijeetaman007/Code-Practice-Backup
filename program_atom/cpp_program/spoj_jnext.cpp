#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> v,v1;
    for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      v.push_back(a);
    }
    int p,flag=0;
    for(int i=n-1;i>0;i--)
    {
      if(v[i-1]>=v[i])
      {
        v1.push_back(v[i]);
        continue;
      }
      else
      {
        v1.push_back(v[i]);
        flag=1;
        p=i-1;
        //cout<<"element is"<<v[p]<<endl;
        break;
      }
    }
    if(flag==0)
    {
      cout<<"-1"<<endl;
      continue;
    }
    sort(v1.begin(),v1.end());
    int temp;
    for(int i=0;i<v1.size();i++)
    {
      if(v1[i]>v[p])
      {
        temp=v1[i];
        v1[i]=v[p];
        v[p]=temp;
        break;
      }
      else
      continue;
    }

    for(int i=0;i<=p;i++)
    cout<<v[i];
    for(int i=0;i<v1.size();i++)
    cout<<v1[i];
    cout<<endl;
  }
}
