#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("/home/abhijeet/AMAN/Code/program_cpp/LeetCodeweekly/1TestArena/input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
	string s,ans;
	char x;
	cin>>s;
	cin>>x;
	int n=s.size();
	int flag=0;
	if(s[0]=='-')
	{
		for(int i=0;i<n;i++)
		{
			if(s[i]-'0'<=x-'0' || flag==1)
			{
				ans=ans+s[i];
				continue;
			}
			else
			{
				ans=ans+x;
				ans=ans+s[i];
				flag=1;
			}
		}
	}
	else
	{	
		for(int i=0;i<n;i++)
		{
			if(s[i]-'0'>=x-'0' || flag==1)
			{
				ans=ans+s[i];
				continue;
			}
			else
			{
				ans=ans+x;
				ans=ans+s[i];
				flag=1;
			}
			cout<<ans<<endl;
		}
	}
	if(flag==0)
		ans=ans+x;
	cout<<"ans is "<<ans<<endl;
}