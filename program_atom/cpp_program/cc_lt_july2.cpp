#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    int n,a;
    vector<int> v,v1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    v1.push_back(v[0]);
    for(int i=1;i<n;i++)
    {
      if(v[i]!=v1[i-1])
      {
        v.push_back(v[i-1]);
        printf(v[i-1]);
      }
    }
  }
}
