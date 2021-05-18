#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll c=0;
    vector<ll>r(n),p(n);
    for(ll i=0;i<n;i++) cin>>r[i];
    for(ll i=0;i<n;i++) cin>>p[i];
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(r[i]+r[j]>p[i]+p[j]){
                c++;
            }
        }
    }
    cout<<c;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}