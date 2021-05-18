#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,a;
  cin>>t;
  while(t--)
  {
    int flag1=0,flag2=0,n,s,min1=0,min2=0;
    cin>>n;
    cin>>s;
    queue<int> q;
      for(int i=0;i<n;i++)
      {
         cin>>a;
        q.push(a);
      }
      for(int i=0;i<n;i++)
      {
        cin>>a;
        if(a==0)
        {
          if(flag1==0)
          {
            min1=q.front();
            flag1=1;
            q.pop();
            continue;
          }
          else{
            if(min1>q.front())
            {
              min1=q.front();
              q.pop();
            }
            else
            q.pop();
            continue;
          }
        }
        if(a==1)
        {
          if(flag2==0){
            min2=q.front();
            flag2=1;
            q.pop();
            continue;
          }
          else{

            if(min2>q.front())
            {
              min2=q.front();
              q.pop();
            }
            else
            q.pop();
            continue;
          }
        }
      }
      cout<<min1+min2+s;
      if((min1+min2+s)<=100)
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;
      flag1=0;
      flag2=0;
  }
}
