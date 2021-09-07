#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			v[i]=1;				
		}
		if(abs(v[i]-v[i-1]<=1))
		{
			continue;
		}
		else
		{
			v[i]=v[i-1]+1;
		}
	}
	int ans=*max_element(v.begin(),v.end());
	cout<<ans<<endl;
}