#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int mx=1e5;
	int mod=1e9+7;
	vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	vector<long long int> freq(2*mx+1,0);
	for(int i=0;i<v.size();i++)
	{
		freq[v[i]]++;
	}
	for(int i=1;i<freq.size();i++)
	{
		freq[i]=freq[i]+freq[i-1];
	}
	int m=*max_element(v.begin(),v.end());
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		int q=1;
		int l=v[i]-1;
		int r=2*v[i]-1;
		while(l<=m)
		{
			sum=sum+(freq[r]-freq[l])*q;
			sum=sum%mod;
			q++;
			l=l+v[i];
			r=r+v[i];
		}
		// cout<<"sum is "<<sum<<endl;

	}
	// sum=sum+n;
	// sum=sum%mod;
	cout<<sum<<endl;
}