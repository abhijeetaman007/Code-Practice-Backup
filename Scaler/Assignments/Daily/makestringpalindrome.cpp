#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1,s2;
	cin>>s;
	int n=s.size();
	int ans=0,ans1=INT_MAX;
	stack<char> st;
	for(int i=n-1;i>=0;i--)
	{
		if(st.empty())
		{
			st.push(s[i]);
		}
		else
		{
			if(s[i]==st.top())
			{
				s1=s1+s[i];
				s1=s1+st.top();
				st.pop();
			}
			else
				st.push(s[i]);
		}
	}
	ans=st.size();
	if(ans>1)
	{
		while(st.size()>1)
	{
		s2=s2+st.top();
		st.pop();
	}
	s=s2+s1;
	// cout<<"s is "<<s<<endl;
	st.pop();
	n=s.size();
	for(int i=n-1;i>=0;i--)
	{
		if(st.empty())
		{
			st.push(s[i]);
		}
		else
		{
			if(s[i]==st.top())
			{

				// s1=s1+st.top();
				st.pop();
			}
			else
				st.push(s[i]);
		}
	}
	cout<<ans<<endl;
	ans1=st.size();
	cout<<ans1<<endl;

	ans=min(ans1,ans);

	}
	cout<<ans<<endl;	
}