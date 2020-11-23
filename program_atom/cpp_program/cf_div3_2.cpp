#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  int count=0;
  int n;
  cin>>n;
  while(n!=1)
  {
    int flag=0;
    if(n%6==0)
    {
      n=n/6;
      flag=1;
      count+=1;
      continue;
    }
    if(n%3==0)
    {
      n=n/3;
      flag=1;
      count+=2;
      continue;
    }
    if(flag==0)
    {
      count=-1;
      break;
    }
  }
  cout<<count<<endl;
}
}
