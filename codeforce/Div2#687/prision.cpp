#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t;
    cin>>t;
    while(t--)
    {
    	long long int n,m,r,c;
    	long long int a,b,d,e,ans;
    
    	cin>>n>>m>>r>>c;
    	r=r-1;
    	c=c-1;
    	a=abs(r-0)+abs(c-0);
    	b=abs(r-(n-1))+abs(c-(m-1));
    	d=abs(r-0)+abs(c-(m-1));
    	e=abs(r-(n-1))+abs(c-0);
    	ans=max(a,max(b,max(e,d)));
    	cout<<ans<<endl;
    }
}