#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<int> ans(n);
		ans[0]=1;
		for(int i=1;i<n;i++)
		{
			if(s[i]>s[i-1])
			{
				ans[i]=ans[i-1]+1;
			}
			else
			{
				ans[i]=1;
			}
		}
		cout<<"Case #"<<j<<": ";
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}