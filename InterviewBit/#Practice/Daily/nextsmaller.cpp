#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n),ans(n,-1);
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		if(s.empty())
		{
			s.push(i);
		}
		else
		{
			if(v[s.top()]<=v[i])
			{
				s.push(i);
			}
			else
			{
				while(!s.empty() && v[s.top()]>v[i])
				{
					ans[s.top()]=v[i];
					s.pop();					
				}
				s.push(i);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
}