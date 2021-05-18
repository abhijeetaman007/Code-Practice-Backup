#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
vector<int> v,max;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v.push_back(a);
    max.push_back(a);
  }
  sort(max.begin(),max.end(),greater<int>());
  int sum=0,j=0,charge=0;
  for(int i=0;i<n;i++)
  {
    if(v[i]!=max[j])
    {
      sum=sum-v[i];
      charge=charge+1;
    }
    else
    {
      if(charge==0)
      {
        sum=sum-v[i];
        charge=charge+1;
      }
      else
      {
        sum=(charge)*(v[i])+sum;
        j=j+1;
        charge=0;
      }
    }
  }
  if(sum<0)
  sum=0;
  cout<<sum<<endl;
  }
}
