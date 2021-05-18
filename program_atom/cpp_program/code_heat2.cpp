#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
  float n,b;
  int a;
  cin>>n>>b;
//  float f=n/b;
//  cout<<"f is"<<f<<endl;
  int m;
  cin>>m;
  float d=(n/b);
  vector<int> v;
  int x=ceil(d);
  if(m==0)
{
    cout<<x;
    return 0;
}

  for(int i=0;i<m;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  if(b>n)
{
    cout<<x;
    return 0;
}
  sort(v.begin(),v.end());

  //cout<<d<<endl;
//  cout<<"x is"<<x<<endl;
  int p=1,q=b,c=0,count=0,flag=0;
while(c<m){
//
  cout<<"range is"<<p<<" to "<<q<<endl;
//  cout<<"Inside while"<<endl;
if(v[c]==v[c-1])
{
  c=c+1;
  continue;
}
  if(v[c]>=p && v[c]<=q)
    {
  //    cout<<"Inside if"<<endl;
  //    cout<<"v[c] is"<<v[c]<<endl;
  //    cout<<p<<" "<<q<<endl;
      c=c+1;
      if(flag!=1)
      flag=1;
      else{
        //count=count+1;
    //    cout<<"count"<<count<<endl;
        x=x+1;
      //  flag=1;
    //    cout<<"x is"<<x<<endl;
      }
    }
    else
    {
      //cout<<"Inside else"<<endl;
      p=p+b;
      q=q+b;
      flag=0;
      //count=0;
    }
}
cout<<x;
}
