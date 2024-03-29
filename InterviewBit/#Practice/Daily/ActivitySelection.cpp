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


bool compare(pair<int,int> a,pair<int,int>b)
{
	return a.second<b.second;
}
 
void solve()
{
        int n;
        cin>>n;
        std::vector<pair<int,int> > v(n);
        int ans=0;
        rep(i,n)
        {
        	cin>>v[i].first;
        }
        rep(i,n)
        {
        	cin>>v[i].second;
        }
        sort(v.begin(),v.end(),compare);
        if(n!=0)
        	ans=1;
        for(int i=0;i<n;i++)
        {
        	cout<<v[i].first<<" ";
        }
        cout<<endl;
        int last=v[0].second;
        for(int i=1;i<n;i++)
        {
        	if(last<=v[i].first){
        		cout<<v[i-1].second<<" "<<v[i].first<<endl;
        		last=v[i].second;
        		ans++;
        	}
        }
        cout<<ans<<endl;


       
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
