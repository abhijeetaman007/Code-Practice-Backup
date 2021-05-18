#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
  vector<int> a,b,v;
  a={5,2};
  b={9,1};
  int m=0,n=0;

  for(int i=0;i!=a.size();i++)
  {
    m=m+a[i]*pow(10,a.size()-1-i);
  }
  //cout<<m<<endl;
  for(int i=0;i!=b.size();i++)
  {
    n=n+b[i]*pow(10,b.size()-1-i);
  }
  //cout<<n<<endl;
  int c=m*n,a1=0;
  //cout<<c<<endl;
  while(c!=0)
  {
    a1=c%10;
    v.push_back(a1);
    c=c/10;
  }
  reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }


}
