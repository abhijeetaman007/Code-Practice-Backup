#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  string s;
  int n;
  cin>>n;
  cin>>s;
  int x=0,c=0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='(')
    {
      x=x+1;
      //cout<<"( found x is"<<x<<endl;
    }
    if(s[i]==')')
    {
      x=x-1;
      //cout<<") found x is"<<x<<endl;
      if(x<0 && abs(x)>c)
      {
        c=c+1;
        //cout<<"C is"<<c<<endl;
      }
    }
  }
  cout<<c<<endl;
}
}
