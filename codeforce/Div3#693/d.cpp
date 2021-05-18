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
 
void solve()
{
        ll n;
        cin>>n;
        vi odd,even;
        rep(i,n)
        {
            int x;
            cin>>x;
            if(x%2!=0)
                odd.pb(x);
            else
                even.pb(x);
        }
        rsortv(even);
        rsortv(odd);        
        long long int a=0,b=0;
        int sign=1;
        int i=0,j=0;
        while(i<even.size() || j<odd.size())
        {
            // deb(i);
            // deb(j);
            // int z;
            // cin>>z;
            if(sign==1)
            {
                if(i>=even.size())
                {
                    j++;
                }
                else if(j>=odd.size())
                {
                    a=a+even[i];
                    i++;
                }
                else if(even[i]>=odd[j])
                {
                    a=a+even[i];
                    i++;         
                }
                else
                {
                    j++;
                }
            }
            else
            {
                if(j>=odd.size())
                {
                    i++;
                }
                else if(i>=even.size())
                {
                    b=b+odd[j];
                    j++;
                }   
                else if(odd[j]>=even[i])
                {
                    b=b+odd[j];
                    j++;
                }
                else
                {
                    i++;
                }
            }
            sign=-1*sign;
        }
        // deb(a);
        // deb(b);
        // int temp;
        // cin>>temp;
        if(a==b)
            cout<<"Tie"<<endl;
        else
        {
            if(a>b)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }

       
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
