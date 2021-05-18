#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,a,flag=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    for(int i=1;i<n-1;i++)
    {
      int c=-1,b=-1,f=1;
      for(int j=0;j<i;j++)
      {
        if(v[i]>v[j])
        {
           b=j;
           f=1;
        }
      }
      for(int j=i+1;j<n;j++)
      {
        if(f=1){
          if(v[i]>v[j])
           c=j;
        }
      }
      if(c!=-1)
      {
        if(b!=-1)
        {
          cout<<"YES"<<endl;
          cout<<b+1<<" "<<i+1<<" "<<c+1<<" "<<endl;
          flag=1;
          break;

        }
      }
    }

    if(flag==0)
    {
      cout<<"NO"<<endl;
      continue;
    }

  }
}
