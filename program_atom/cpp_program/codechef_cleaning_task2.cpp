#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  int n,m,a;
  cin>>n>>m;
  vector<int>v,v1;
    for(int i=0;i<m;i++)
     {
         cin>>a;
         v.push_back(a);
       }
  sort(v.begin(),v.end());
  int count=1,c=1,i=0;
  while(count<=n)
  {
    if(count==v[i])
    {
      count++;
      i++;
    }
    else
    {
      while(count!=v[i] && count<=n)
      {
        if((c%2)!=0)
        cout<<count<<" ";
        else
        v1.push_back(count);
        count++;
        c++;
      }
    }
  }
  cout<<endl;
  for(i=0;i<v1.size();i++)
  cout<<v1[i]<<" ";
  cout<<endl;
}
}
