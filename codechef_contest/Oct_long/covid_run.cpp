#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		// cout<<x<<y<<endl;
		if(x==y)
		{
			cout<<"YES"<<endl;
			continue;
		}
		int a=(k+x)%n,flag=0;
		while(a!=x)
		{
			// cout<<"a is "<<a<<endl;
			if(a==y)
			{
				cout<<"YES"<<endl;
				flag=1;
				break;
			}	
			a=(k+a)%n;	
		}
		if(flag==0)
		cout<<"NO"<<endl;
	}
}