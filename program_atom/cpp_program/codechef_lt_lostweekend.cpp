#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int s=0;
    for(int i=0;i<=5;i++)
    {
      int a;
      cin>>a;
      if(i!=5)
      s=a+s;
      else
      s=s*a;
    }
    if(s<=(24*5))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  }
}
