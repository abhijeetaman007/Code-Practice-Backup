#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    //vector<int> v;
    int s=0;
    for(int i=0;i<5;i++)
    {
      int a;
      cin>>a;
      s=a+s;
    }
    int p;
    cin>>p;
    s=s*p;
    if(s<=(24*5))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  }
}
