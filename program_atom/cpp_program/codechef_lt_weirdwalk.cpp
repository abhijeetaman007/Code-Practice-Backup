#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    cin>>b[i];
    int count=0,s1=0,s2=0;
    for(ll i=0;i<n;i++)
    {
      s1+=a[i];
      s2+=b[i];
      if(s1==s2 && a[i]==b[i])
        count+=a[i];
    }
    cout<<count<<endl;
  }
}
