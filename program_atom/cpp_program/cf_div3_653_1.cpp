#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    ll x,y,n;
    cin>>x>>y>>n;
    ll k;
    if(((n/x)*x+y)<=n)
    k=(n/x)*x+y;
    else
    k=((n/x)-1)*x+y;
    cout<<k<<endl;
  }
}
