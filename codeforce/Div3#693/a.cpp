#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		long long int ans=1;
		long long int x=1;
		while(a%2==0)
		{
			a/=2;
			x=x*2;

		}
		while(b%2==0)
		{
			b/=2;
			x=x*2;

		}
		if(x>=c)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}