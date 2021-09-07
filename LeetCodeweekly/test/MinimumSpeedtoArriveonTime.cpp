#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define deb(x) cout<<#x<<" : "<<x<<endl;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	double hr;
	cin>>hr;
	int maxn=1e5;
	int ans=INT_MAX;
	if(hr<=n-1)
	{
		ans=-1;
	}
	else
	{
		long long int x=1;
		double s=INT_MAX;
		int l=1;
		int r=1e7;
		while(l<=r)
		{
			deb(l);
			deb(r);
			s=0;
			x=(l+r)/2;
			deb(x);	
			for(int i=0;i<n-1;i++)
			{	
				s=s+ceil(((double)v[i]/(x)));
			}
			s=s+((double)v[n-1]/x);
			if(s>hr)
			{
				l=x+1;
			}
			else
			{
				if(ans>x){
					ans=x;
					deb(ans);
				}
				r=x-1;
			}
		}
	}
	if(ans==INT_MAX)
		ans=-1;
	cout<<ans<<endl;
}

