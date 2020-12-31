#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,a,b,ans;
		cin>>n>>k>>a>>b;
		if(a>b)
			swap(a,b);
		int x=(a-1)+(n-b);
		if(x>k)
		{
			ans=(b-a)+(k);
		}
		else
		{
			ans=n-1;
		}
		cout<<ans<<endl;
	}
}