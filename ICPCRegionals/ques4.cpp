#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
long long int lcmfun(long long int a, long long int b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
	long long int N=100001;
	vector<long long int> spf(N,-1);
	vector<bool> prime(N,true);
	prime[0] = false;
	prime[1] = false;
	for(long long int i=2;i*i<=N;i++)
	{
		for(long long int j=i;i*j<=N;j++)
		{
			if(prime[i*j])
			{
				prime[i*j]=false;
				spf[i*j]=i;
			}
		}
	}
	for(int i=0;i<spf.size();i++)
	{
		if(prime[i])
		{
			spf[i]=i;
		}
	}


	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<long long int> v(n);
		for(int i=0;i<n;i++) 
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end(),greater<int>());
		vector<long long int> ans(n,0),lcm(n);
		lcm[0] = v[0];
		for(int i=1;i<n;i++)
		{
			if(v[i]==1)
			{
				ans[i]=ans[i-1]+2;
				lcm[i-1]=lcmfun(2,lcm[i-1]);
			}
			else if(__gcd(v[i],lcm[i-1])==1)
			{
				int k=min(spf[lcm[i-1]],spf[v[i]]);
				k=min(2,k);
				ans[i] = ans[i-1] + k;
				lcm[i] = lcmfun(v[i],lcm[i-1]);
			}
			else
			{
				ans[i] =ans[i-1];
				lcm[i] = lcm[i-1];
			}
		}
		cout<<ans[n-1]<<endl;
	}

}