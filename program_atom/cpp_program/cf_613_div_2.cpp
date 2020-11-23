#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,sum=0,s=0,a,c=0;
    vector<ll> v,v1;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      sum=sum+a;
      v.push_back(a);
    }
    cout<<"Sum is"<<sum<<endl;
    for(int i=0;i<n;i++)
    {
      if(v[i]>=0)
      {
        s=s+v[i];
        cout<<"s is "<<s<<endl;
        if(i==n-1)
        v1.push_back(s);
      }
      else
      {
        if(abs(v[i+1])>abs(v[i]) && i!=n-1)
        {
          s=s+v[i];
          cout<<"S is"<<s<<endl;
        }
        else
        {
          printf("Inside else and num is %d",v[i]);
          flag=1;
          v1.push_back(s);
          s=0;
        }
      }
    }
  //  printf("flag is %d",flag);
  ll d=(*max_element(v1.begin(),v1.end()));
  cout<<d;
    if(sum>d)
    {
      printf("YES 1\n");
    }
    else
    {
      if(flag==0)
      printf("YES\n");
      else
      printf("NO\n");
    }
  }
}
