#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	long long int ans=0;
	if(m>=n)
	{
		for(int i=0;i<n;i++)
			ans=ans+a[i];
		cout<<ans<<endl;
	}
	else
	{
			long long int max=0;
		for(int i=0;i<n-m-1;i++)
		{
		
			long long int x=0;
			for(int j=i;j<i+m;j++)
			{
				if(b[j]==0)
					x=x+a[j];
			}
			if(x>max)
				max=x;
			// cout<<"max is "<<max<<" X is "<<x<<endl;
		}
		for(int i=0;i<n;i++)
		{
			if(b[i]==1)
				ans=ans+a[i];
		}
		ans=ans+max;
		cout<<ans<<endl;
	}
}