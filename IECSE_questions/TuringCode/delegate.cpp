#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a=0,b=0,x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==0 || x==2)
			a=a+1;
		// if(x==2)
			// b=b+1;
	}
	long long int ans=0;
	ans=ans+(a/2);
	// ans=ans+(/2);
	cout<<ans<<endl;
}