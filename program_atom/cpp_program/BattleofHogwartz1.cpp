#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct arr{
  int info;
  int index;
  int flag;
};
int main(){
  int x,n,i,t,j,max=-1,in=0,temp;
  cin>>n>>x;
  struct arr b,a,c,*maxadd,*add;
  queue<struct arr> q1,q2;
  for(i=0;i<n;i++)
  {
    cin>>temp;
    a.info=temp;
    a.index=++in;
    a.flag=0;
    cout<<"Index is"<<in<<endl;
    q1.push(a);
  }
  for(i=0;i<x;i++)
  {
    if(q1.size()>=x)
    t=x;
    else
    t=q1.size();
    cout<<"t is"<<t<<endl;
    max=-1;
    for(j=0;j<t;j++)
    {
      //c=-1;
      b=q1.front();
      cout<<"Front is"<<b.info<<endl;
      cout<<"Index of front is"<<b.index<<endl;
      q1.pop();
      //cout<<"Max is"<<max;
      if(max<b.info)
      {
        //maxadd=&q1.front();
        //q.front().flag=1;
        max=b.info;
        c=b;
      }
      //if(b.info>0)
      //b.info=b.info-1;
      q2.push(b);
    }
    //cout<<"Max is"
    cout<<"Max element is "<<c.info<<endl;
    cout<<"Max Index is "<<c.index<<endl;
    int flag=0;
    for(j=0;j<t;j++)
    {
      b=q2.front();
      cout<<"b.info is"<<b.info<<endl;
    if(b.info!=(max))
    {
      q2.pop();
      if(b.info>0)
      b.info=b.info-1;
      q1.push(b);
      cout<<"new element "<<q1.back().info<<endl;
    }
    else{
      if(flag==0){
        q2.pop();
        flag=1;
      }
      else{
        q2.pop();
        if(b.info>0)
        b.info=b.info-1;
        q1.push(b);
        cout<<"new element from if else "<<q1.back().info<<endl;
      }
    }
  }
  cout<<q1.front().info<<endl;
  cout<<"i is"<<i<<endl;
  cout<<"X is"<<x<<endl<<endl<<endl;
}
}
