#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	long long int ans=0,y=0;
	cin>>n>>x;
	vector<long long int> v(n),v1(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++)
	{
		v1[i]=v[i]*(n-i);
		// cout<<v1[i]<<endl;
	}
	sort(v1.begin(),v1.end());
	for(int i=0;i<n;i++)
	{
		if(y+v1[i]<=x){
			y=y+v1[i];
			ans++;
		}
	}
	cout<<ans<<endl;
}