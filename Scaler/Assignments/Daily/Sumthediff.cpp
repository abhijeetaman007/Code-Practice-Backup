#include<bits/stdc++.h>
using namespace std;
// #define M 1000000007;
// // #define ll long long int;
int main()
{
	long long int max=0,min=0,sum=0;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end(),greater<int>());
	for(int i=0;i<n;i++)
	{
		int x=1<<(n-i-1);
		max=max+x*(v[i]);
		x=1<<i;
		min=min+x*(v[i]);
	}
	sum=max-min;
	cout<<sum<<endl;
}