#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,ans;
	cin>>s;
	stack<char>st;
	for(int i=0;i<s.size();i++)
	{
		if(st.empty() || st.top()!=s[i])
		{
			st.push(s[i]);
		}
		else
		{
			if(st.top()==s[i])
			{
				st.pop();
			}
		}
	}
	while(!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
	}
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
}