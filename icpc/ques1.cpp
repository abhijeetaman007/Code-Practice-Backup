#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,str="";
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!='?')
			{
				str=str+s[i];
			}
		}
		string substr="MU";
		string ans="No";
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='M')
			{
				if(i+1<str.size() && str[i+1]=='U')
				{
					ans="Yes";
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
	
}