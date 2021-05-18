#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b)
{
	return (a.second-a.first)>(b.second-b.first);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,ans=0;
		long long int s1=0,s2=0;
		cin>>n>>m;
		vector<int> a(n),b(m);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s1+=a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			s2+=b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int>());
		// for(int i=0;i<a.size();i++)
		// 	cout<<a[i]<<" ";
		// cout<<endl;
		// for(int i=0;i<b.size();i++)
		// 	cout<<b[i]<<" ";
		// cout<<endl;
		int k=min(m,n);
		int j=0;
		while(s1<=s2 && j<k)
		{
			if(b[j]<=a[j])
				break;
			s1=s1+b[j]-a[j];
			s2=s2+a[j]-b[j];
			j++;
			ans++;
		}
		if(s1<=s2)
			ans=-1;
		cout<<ans<<endl;
	}	
}