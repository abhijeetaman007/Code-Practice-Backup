#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b)
{
	if(a.second>b.second)
		return true;
	else
	{
		if(a.second==b.second)
		{
			if(a.first>=b.first)
				return true;
		}
	}
	return false;
}




int main()
{
	int n;
	cin>>n;
	std::vector<int> a(n);
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	sort(a.begin(),a.end(),greater<int>());
	vector<pair<int,int> >v(n);

	for(int i=0;i<n;i++)
	{
		v[i].first=a[i];
		v[i].second=a[i]*m[a[i]];
		m[a[i]]--;
	}
	sort(v.begin(),v.end(),compare);

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" ";
	} 
	cout<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].second<<" ";
	}
}