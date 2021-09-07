#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n),ans;
	for(int i=0;i<n;i++)
		cin>>v[i];
	deque<int> q;
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		if(v[i]<0)
			q.push_back(i);
	}
	if(!q.empty())
	ans.push_back(v[q.front()]);
	else
	ans.push_back(0);
	int start=1;
	for(int i=k;i<n;i++)
	{
		while(!q.empty() && start>q.front())
		{
			q.pop_front();
		}
		if(v[i]<0)
		q.push_back(i);
		if(!q.empty())
		{
			ans.push_back(v[q.front()]);
		}
		else
		{
			ans.push_back(0);
		}
		start++;
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}

}