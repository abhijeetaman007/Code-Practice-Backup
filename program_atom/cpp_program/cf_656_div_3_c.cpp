#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    int c=0,temp=0;
    while(1)
    {
      int found=0;
    for(int i=c;i<v.size();i++)
    {
      //cout<<"checking for"<<v[i]<<endl;
      if(i+1<v.size())
      {
        if(v[i+1]-v[i]>=0)
        continue;
        else
        {
          temp=i;
        //  cout<<"temp is"<<temp<<endl;
          break;
        }
      }
        if(i==(v.size()-1))
        {
          cout<<c<<endl;
          found=1;
          break;
        }

    }
    if(found==1)
    break;
    int flag=0;
    for(int i=n-1;i>temp;i--)
    {
      if(i-1>=0){
        if(v[i-1]-v[i]>=0)
        {
          flag=0;
          continue;
        }
        else
        {
          flag=1;
          break;
        }
      }
      if(i==0)
      {
        cout<<0<<endl;
        found=1;
        break;
      }
    }
    if(found==1)
    break;

    if(flag==1)
    {
      c=c+1;
      //cout<<"Increment in c "<<c<<endl;
    }
    if(flag==0)
    {
      cout<<c<<endl;
      break;
    }
  }
}
}
