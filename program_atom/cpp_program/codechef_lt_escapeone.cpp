#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      //cout<<"test1";
      int a;
      cin>>a;
      v.push_back(a);
      //cout<<"test";
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
      //int temp=i;
      if(v[i]==1)
      {
        for(int j=i+1;j<n;j++)
        {
          if(v[j]==1)
          {
            v[i]=0;
            v[j]=v[j]+1;
            cout<<"c is"<<c<<endl;
            cout<<"j-i "<<j-i<<"n-i "<<n-(j-i)<<endl;
            int temp;
            int temp1=j-i;
            //cout<<temp1<<endl;
            int temp2=n-(j-i);
            //cout<<temp2<<endl;
            temp1<temp2?temp=temp1:temp=temp2;
            //cout<<"temp is"<<temp<<endl;
            c=c+temp;
            i=j;
          }
          else
          continue;
        }
      }
      else
      continue;
    }
    cout<<c<<endl;
  }
}
