#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,ans;
	stack<char> st;
	cin>>s;
	unordered_map<char,int> m;
	m['^']=3;
	m['*']=2;
	m['/']=2;
	m['+']=1;
	m['-']=1;
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			// ans=ans+s[i];
			ans.push_back(s[i]);  //Optimized way to do
		}
		else
		{
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
			{
				if(st.empty() || m[st.top()]<m[s[i]])
				{
					st.push(s[i]);
				}
				else
				{
					while(!st.empty() && m[st.top()]>=m[s[i]])
					{
						// ans=ans+st.top();
						ans.push_back(st.top());
						st.pop();
					}
					st.push(s[i]);
				}
			}
			else if(s[i]=='(')
			{
				st.push(s[i]);
			}
			else if(s[i]==')')
			{
				while(st.top()!='(')
				{
					// ans=ans+st.top();
					ans.push_back(st.top());
					st.pop();
				}
				if(st.top()=='(')
				st.pop();
			}
		}
	}
	while(!st.empty()){
		// ans=ans+st.top();
		ans.push_back(st.top());
		st.pop();
	}
	cout<<ans<<endl;	
}