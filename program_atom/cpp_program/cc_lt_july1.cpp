//Chef and Demonetisation Problem Code: CHFMOT18
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
  int r=0,s,n,count=0;
  cin>>s>>n;
  if (s<=n)
  {
    if(s%2==0){
      cout<<1<<endl;
      continue;
    }
    else
    {
      if(s!=1)
      cout<<2<<endl;
      else
      cout<<1<<endl;
      continue;
    }
  }
  else
  {
    count=0;
    count=s/n;
    r=s%n;
    if(r==0)
    {
      cout<<count<<endl;
      continue;
    }
    if(r%2==0)
    {
      count=count+1;
      cout<<count<<endl;
      continue;
    }
    else
    {
      if (r==1){
        count=count+1;
        cout<<count<<endl;
        continue;
      }
      if(r%2!=0){
        //cout<<"Test";
        count=count+2;
        cout<<count<<endl;
        continue;
      }
    }
  }
}
}
