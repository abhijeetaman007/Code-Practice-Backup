#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int q;
		cin>>q;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		while(q--)
		{
			int x,y;
			cin>>x>>y;
			v[x-1]=y;
			int ans=INT_MAX;
			for(int i=0;i<n-1;i++)
			{
				int mn=v[i];
				int mx=v[i];
				// deb(mn);
				// deb(mx);
				// deb("loop")

				for(int j=i+1;j<n;j++)
				{
					mn=min(mn,v[j]);
					mx=max(mx,v[j]);
					// deb(mx);
					// deb(mn);
					ans=min(ans,mx-mn);
					// deb(ans);
				}
			}
			cout<<ans<<endl;
		}
	}
}