#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,a;
  cin>>t;
  while(t--)
  {
    int n,s,min1=100,min2=100;
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
            if(min1>q.front())
            {
              min1=q.front();
              q.pop();
            }
            else
            q.pop();
            //continue;

          }
         else if(a==1)
        {
            if(min2>q.front())
            {
              min2=q.front();
              q.pop();
            }
            else
            q.pop();
            //continue;
        }
      }
     // cout<<min1+min2+s;
      if((min1+min2+s)<=100)
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;
  }
}
