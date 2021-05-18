#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  int count=0;
  int j=0;
  for(int i=0;i<n;i++)
  {
      j=i;
      while(v[j]<=v[i]+4 && j<n)
		 j=j+1;

      i=j-1;
      count=count+1;
  }
  cout<<count;
}
