#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	map<int,int> m1,m2;
	set<int> s;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		m1[x]++;
		s.insert(x);
	}
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		m2[x]++;
		s.insert(x);
	}
	vector<int> ans;
	auto itr=s.begin();
	for(int i=0;i<s.size();i++)
	{
		int y=min(m1[*itr],m2[*itr]);
		for(int j=0;j<y;j++)
		{
			ans.push_back(*itr);
		}
		itr++;
	}
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
}