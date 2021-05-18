#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  int n,m;
  cin>>n;
  cin>>m;
  vector<int> v,v1,v2;
  vector<int>::iterator ptr;
  while(m--)
  {
    int a;
    cin>>a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  int j=0,count=1;
  for(int i=1;i<=n;i++)
  {
    int flag=0;
    while(flag==0)
    {
      if(i==v[j])
      {
        //cout<<"i is "<<i<<" v[j] is "<<v[j]<<endl;
        ptr=v.begin();
        v.erase(ptr);
        i++;
        if(i>n)
        break;
      }
      else
      {
      //  cout<<"Count is "<<count<<endl;
      //  cout<<"Element pushed"<<i<<endl;
       if((count%2)!=0)
          {
            cout<<i<<" ";
          }
        else
        v2.push_back(i);
        count++;
        flag=1;
      }
    }
  }
  /*for(int i=0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }*/
  cout<<endl;
  for(int i=0;i<v2.size();i++)
  {
    cout<<v2[i]<<" ";
  }
  cout<<endl;
}
}
