#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n),ans(n,0);
	for(int i=0;i<n;i++)
		cin>>v[i];
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		ans[i]=ans[i]+1;
		if(s.empty() || v[i]<v[s.top()])
		{
			s.push(i);
		}
		else
		{
			while(!s.empty() && v[i]>=v[s.top()])
			{
				ans[i]=ans[i]+ans[s.top()];
				s.pop();
			}
			s.push(i);
		}
	}
	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
}