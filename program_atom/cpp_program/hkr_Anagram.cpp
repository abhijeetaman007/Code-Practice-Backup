#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s.length()%2==0)
		{
			vector<int> v1(26),v2(26);
			for(int i=0;i<s.size();i++)
			{

				int a=s[i]-'a';
				if(i<s.size()/2)
				{
					v1[a]+=1;
				}
				else
				{
					v2[a]=v2[a]+1;
				}
			}
			int c=0;
			for(int i=0;i<26;i++)
			{
				if(v1[i]!=v2[i])
				{
					c=c+abs(v1[i]-v2[i]);
				}
			}
			cout<<c/2<<endl;
		}	
		else
			cout<<-1<<endl;
	}
}