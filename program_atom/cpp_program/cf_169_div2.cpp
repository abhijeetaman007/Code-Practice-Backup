#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  string s;
  char t;
  cin>>s;
  int i=0;
  int n=s.length();
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-1-i;j++)
    {
      if(s[j]>s[j+1])
      {
        t=s[j];
        s[j]=s[j+1];
        s[j+1]=t;
      }
    }
  }
  // c/out<<s<<endl;
  int count=0;
  for(int i=0;i<n;i++)
  {
    int c=1;
    for(int j=i;j<n;j++)
    {
      //if(j+1<n){
        //cout<<"s[j] "<<s[j]<<"s[j+1] "<<s[j+1]<<endl;;
      if(s[j]==s[j+1] && j+1<n)
      {
      //  cout<<"inside if "<<endl;
        c=c+1;
        continue;
      }
      else
      {
        if(c%2!=0)
        count=count+1;

        i=j;
    //    cout<<"i is "<<i<<endl;
        break;
      }
      // else
      // count=count+1;

    }
  }

  //cout<<count<<endl;
  if(count==0)
  {
    cout<<"First"<<endl;
  }
  else{
  if(count%2==0)
  cout<<"Second"<<endl;
  else
  cout<<"First"<<endl;
  }
}
