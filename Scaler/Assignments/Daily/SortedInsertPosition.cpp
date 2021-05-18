#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	int l=0,r=n-1,m;
	while(l<=r)
	{
		m=(l+r)/2;
		if(k==v[m])
		{
			break;
		}
		if(k>v[m])
		{
			l=m+1;
		}
		else
		{
			r=m-1;
		}
	}
	// int ans;	
	if(k==v[m])
		cout<<m<<endl;
	else
	{
		if(v[m]<k)
			cout<<m+1<<endl;
		else
			cout<<m<<endl;
	}
}