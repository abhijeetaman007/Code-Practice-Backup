#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,ans;
	cin>>s;
	queue<int> q;
	unordered_map<char,int> m;
	for(int i=0;i<s.size();i++)
	{
		m[s[i]]++;
		if(m[s[i]]==1)
		{
			q.push(s[i]);
		}	
		while(!q.empty() && m[q.front()]!=1)
		{
			q.pop();
		}
		if(q.empty())
		{
			ans.push_back('#');
		}	
		else
		{
			ans.push_back(q.front());
		}
	}
	cout<<ans<<endl;
}