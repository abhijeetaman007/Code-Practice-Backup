#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	stack<char> s;
	char c='\0';
	for(int i=0;i<str.size();i++)
	{
		if(s.empty() && str[i]!=c)
		{
			s.push(str[i]);
		}
		else
		{
			if(s.top()==str[i])
			{
				c=s.top();
				s.pop();
				continue;
			}
			else
			{
				if(c!=str[i])
					s.push(str[i]);
			}
		}
	}
	string ans;
	while(!s.empty())
	{
		ans=s.top()+ans;
		s.pop();
	}
	cout<<ans<<endl;
}