#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	// int x=0,a=0,b=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		// x=x^v[i];
	}
	int ans=0,res;
	for(int i=0;i<32;i++)
	{
		int c=0,d=0;
		for(int j=0;j<n;j++)
		{
			if(((1<<i)&v[j])>0)
			{
				c=c+1;
			}
			else
				d=d+1;

		}
		// cout<<c<<d<<endl;
		ans=ans+c*d;
	}
	ans=2*ans;
	cout<<"Ans is "<<ans<<endl;
}