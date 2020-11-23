#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int x,n,i=0,j,a,t,c=0,day=1,flag=0;
  cin>>t;
  vector<int> v;
  while(t--)
{
   cin>>n>>x;
    for(i=0;i<n;i++)
   {
    cin>>a;
    v.push_back(a);
   }
  sort(v.begin(),v.end());
  i=0;
  day=1;
  flag=0;
  while(i!=n)
  {
     for(j=0;j<x;j++)
        {
            if(v[i]>day)
            {
                i=i+1;
                if(i==n)
                 break;
           }
            else
          {
               cout<<"Impossible"<<endl;
               flag=1;
               break;
          }
        }
   if(flag==1)
   break;
  day=day+1;
 }
     if(i==n)
     cout<<"Possible"<<endl;

   v.clear();
 }
}
