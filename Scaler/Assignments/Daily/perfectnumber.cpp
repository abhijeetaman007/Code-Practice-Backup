#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	while(1)
	{
		int a;
	cin>>a;
	string ans;
	// cout<<(float)(a/2)+1<<endl;
	// cout<<(float)(log2(((float)a/2)+1))<<endl;	
	int k=ceil((float)(log2((float)((float)a/2)+1)));
	// cout<<"k is "<<k<<endl;
	if(a==1)
	{
		ans="11";
		cout<<ans;
		return 0;
	}
	int t=k-1;
	int b=2*(pow(2,t)-1);
	int c=(a-b);
	// cout<<c<<endl;
	for(int i=0;i<k;i++)
	{
		if(i==k-1)
		{
			if(c%2!=0)
			{
				ans.push_back('1');
			}
			else
			{
				ans.push_back('2');
			}
		}
		else
		{
			int x=ceil(((float)c/(pow(2,t))));
			// cout<<"x is "<<x<<endl;
			if(x%2==0)
			{
				ans.push_back('2');
			}
			else
			{
				ans.push_back('1');
			}
			t=t-1;
		}
	}
	string y=ans;
	// cout<<"y is "<<y<<endl;
	reverse(y.begin(),y.end());
	ans=ans+y;
	cout<<ans<<endl;
	}
}