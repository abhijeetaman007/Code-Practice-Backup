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
  vector<float> v;
  int x=ceil(d);
/*  if(m==0)
{
    cout<<x;
    return 0;
}*/

  for(int i=0;i<m;i++)
  {
    cin>>a;
    v.push_back(a);
  }
/*  if(b>n)
{
    cout<<x;
    return 0;
}*/
  sort(v.begin(),v.end());
int count=0;
int prev;
for(int i=0;i<v.size();i++)
{
  int grp=ceil(v[i]/b);
//  cout<<grp<<endl;
  if(i==0)
  {
    count=grp;
    //cout<<count<<endl;
    prev=v[i];
    if(i==v.size()-1)
    {
      count=count+(ceil(n/b)-grp);
      cout<<"Ans is"<<count<<endl;
    }
  }
  else{
    int d=(grp-ceil(prev/b));
    cout<<"Diff"<<d<<endl;
    if(d==0)//same group
    {
      count=count+1;
      prev=v[i];
      if(i==v.size()-1)
      {
        count=count+(ceil(n/b)-grp);
        cout<<"Ans is"<<count<<endl;
      }
      continue;
    }

    if(d==1)//next group
    {
      if((v[i]-prev)>=3)
      {
        count=count+2;
      }
      else
      count=count+1;
      prev=v[i];
      if(i==(v.size()-1))
      {
        count=count+(ceil(n/b)-grp);
        cout<<"Ans is"<<count<<endl;
      }
      continue;
    }

    if(d>1)
    {
      prev=(ceil(prev/b)-1)*b;
      count=(grp-ceil(prev/b))+count;
      if(i==(v.size()-1))
      {
        count=count+(ceil(n/b)-grp);
        cout<<"Ans is"<<count<<endl;
      }
      continue;
    }

  }
}
}
