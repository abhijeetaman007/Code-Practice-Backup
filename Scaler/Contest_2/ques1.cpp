#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int mod=1e9+7;
	std::vector<int> v(n),pre(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	pre[0]=v[0];
	cout<<pre[0]<<" ";
	for(int i=1;i<n;i++)
	{
		pre[i]=pre[i-1]+v[i];
		cout<<pre[i]<<" ";
	}	
	cout<<endl;
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+pre[i];
	}
	sum=sum%mod;
	cout<<sum<<endl;

}