#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;	
		cin>>n;
		int ans=n;
		while(n>9)
		{
			ans=ans+n/10;
			n=(n/10)+(n%10);
		}	
		cout<<ans<<endl;
	}
}