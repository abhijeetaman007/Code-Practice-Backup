#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define PI 3.14159265
#define fi first
#define se second
#define rep(i, n) for (ll i = 0; i < n; i++)
#define revrep(i,n) for(ll i=n-1;i>=0;i--)
#define sortv(v) sort(v.begin(), v.end())
#define rsortv(v) sort(v.rbegin(), v.rend())
#define maxele(v) *max_element(v.begin(),v.end())
#define minele(v) *min_element(v.begin(),v.end())
#define deb(x) cout << '>' << #x << " : " << x << endl;
typedef vector<ll> vi;
void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
ll modPower(ll num, ll r)
{
    if (r == 0)
        return 1;
    if (r == 1)
        return num % MOD;
    ll ans = modPower(num, r / 2) % MOD;
    if (r % 2 == 0)
    {
        return (ans * ans) % MOD;
    }
    return (((ans * ans) % MOD) * num) % MOD;
}
 
bool compare(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first;
}

void solve()
{
        ll n;
        cin>>n;
        vi v(n);
        rep(i,n)
        {
            
            cin>>v[i];
            cout<<v[i]<<" ";
        }
        cout<<endl;
        vector<pair<int,int> > v1(n);
        for(int i=0;i<n;i++)
        {
            v1[i].first=v[i];
            v1[i].second=i;
        }
        sort(v1.begin(),v1.end(),compare);
        std::vector<int> ans(n,0);
        ans[v1[0].second]=1;
        for(int i=1;i<n;i++)
        {
            int j=v1[i].second;
            int f=0;
            if(j+1<n && ans[j+1]!=0)
            {
                if(v[j+1]==v[j]){
                    ans[j]=ans[j+1];
                    f=1;
                }
            }
            if(j-1>=0 && ans[j-1]!=0)
            {
                if(v[j-1]==v[j]){
                    ans[j]=ans[j-1];
                    f=1;
                }
            }
            int x=0;
            if(f!=1)
            {
                if(j+1<n)
                    x=ans[j+1];
                if(j-1>=0)
                    x=max(x,ans[j-1]);
                x=x+1;
                ans[j]=x;
            }



        }
        int s=0;
        for(int i=0;i<ans.size();i++)
        {
            s=s+ans[i];
            cout<<ans[i]<<" ";
        }
        cout<<endl;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    fastio();
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
