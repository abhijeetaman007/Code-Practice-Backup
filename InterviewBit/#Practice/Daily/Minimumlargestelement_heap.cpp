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
        // static int c=1;

class compare{
    public:
     bool operator()(pair<int,int> a,pair<int,int> b)
    {
        // deb(c);
        // c++;
        if(a.first>b.first)
            return true;
        else if(a.first==b.first && a.second>b.second){
            // cout<<"in"<<endl;
            // deb(a.first);
            // deb(a.second);

            return true;
        }
        else 
            return false;

    }
 };
void solve()
{
        ll n;
        cin>>n;
        vi v(n);
        vector<int> v1(n);

        rep(i,n)
        {
            
            cin>>v[i];
            v1[i]=v[i];
        }
        int b;
        cin>>b;
        priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
        for(int i=0;i<n;i++)
        {
            pair<int,int> t;
            t.first=2*v[i];
            t.second=i;
            pq.push(t);
        }
        for(int i=0;i<b;i++)
        {
            pair<int,int> t;
            t=pq.top();
            pq.pop();
            v1[t.second]+=v[t.second];
            t.first=t.first+v[t.second];
            pq.push(t);
        }
        int max=*max_element(v1.begin(),v1.end());
        cout<<max<<endl;
        
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
