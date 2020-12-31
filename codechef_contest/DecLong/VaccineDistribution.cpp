#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,d;
		cin>>n>>d;
		long long int risk=0,not_rsk=0,x,ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>=80 || x<=9)
				risk++;
			else
				not_rsk++;
		}		
		ans=ceil((double)(risk)/d)+ceil((double)(not_rsk)/d);
		cout<<ans<<endl;
	}
}