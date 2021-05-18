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
	int j=n-1;
	for(int i=0;i<n;i++)
	{
		if(v[i]==k)
		{
			while(j>i)
			{
				if(v[i]!=v[j])
				{
					swap(v[i],v[j]);
					break;
				}
				j--;	
			}
			if(j<=i)
			{
				break;
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]==k)
			break;
		ans++;
	}
	cout<<ans<<endl;

}