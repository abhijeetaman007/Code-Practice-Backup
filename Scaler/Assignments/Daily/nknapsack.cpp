#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int m;
	cin>>n>>m;
	std::vector<int> a(n);
	std::vector<int> b(m);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>b[j];
	}
	sort(a.begin(),a.end(),greater<int>());
	sort(b.begin(),b.end(),greater<int>());
	
	int i=0;
	int j=0;
	int ans=0;
	while(i<m && j<n)
	{
		if(a[i]>=b[j])
		{
			ans=ans+b[j];
			i++;
			j++;
		}
		else
		{
			j++;
		}
	}
	cout<<ans<<endl;	

}