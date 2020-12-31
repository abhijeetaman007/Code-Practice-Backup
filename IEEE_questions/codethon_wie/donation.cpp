#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	long long int ans=0;
	cin>>n>>k;
	vector<int> v(n),freq(k,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
		freq[v[i]%k]++;
	}
	for(int i=0;i<=k/2;i++)
	{
		if(i==0)
		{
			ans=ans+(freq[i]/2);
		}
		else
		{
			if(k-i==i)
			{
				ans=ans+(freq[i]/2);
			}
			else
			{
				ans=ans+min(freq[i],freq[k-1]);
			}
		}
	}
	ans=ans*2;
	cout<<ans<<endl;
}