#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll powerLL(ll x, ll n)
{
    ll result = 1;
    while (n) {
      cout<<"initial n is"<<n<<endl;
        if (n & 1)
        {
          cout<<"inside if"<<endl;
          result = result * x;
          cout<<"result is"<<result<<endl;
        }
        n = n / 2;
        cout<<"n is"<<n<<endl;
        cout<<"x was"<<x<<endl;
        x = x * x;
        cout<<"x is"<<x<<endl;
    }
    return result;
}
int main()
{
    ll x,y;
    cin>>x>>y;
    cout<<powerLL(x,y);
    return 0;
}
