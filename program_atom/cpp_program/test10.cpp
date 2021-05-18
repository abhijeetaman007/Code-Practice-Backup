#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  int t1=4,t2=4;

  vector<int> v1,v2;
  while(t1--)
  {
    cin>>a;
    v1.push_back(a);
  }
  while(t2--)
  {
    cin>>a;
    v2.push_back(a);
  }
  if(v1==v2)
  cout<<"YES";
  if(v1!=v2)
  cout<<"NO";
}
