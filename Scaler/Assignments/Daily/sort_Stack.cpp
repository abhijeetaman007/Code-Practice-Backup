#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n),ans;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	stack<int> s1,s2;
	for(int i=0;i<n;i++)
	{
		if(s1.empty())
		{
			s1.push(v[i]);
		}
		else
		{
			while(!s1.empty() && s1.top()<v[i])
			{
				s2.push(s1.top());
				s1.pop();
			}
			if(s1.empty() || s1.top()>=v[i])
			{
				s1.push(v[i]);
			}
			while(!s2.empty())
			{
				s1.push(s2.top());
				s2.pop();
			}
		}
	}
	while(!s1.empty())
	{
		cout<<s1.top()<<" ";
		ans.push_back(s1.top());
		s1.pop();
	}

}