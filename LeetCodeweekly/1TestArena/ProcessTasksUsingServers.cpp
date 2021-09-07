#include<bits/stdc++.h>
using namespace std;
class item
{
public:
	int time;
	int wt;
	int idx;
}

bool comp(item a,item b)
{
	if(a.time<b.time)
	{
		return true;
	}
	else if(a.time==b.time)
	{
		if(a.wt<b.wt)
			return true;
		else if(a.wt==b.wt)
		{
			if(a.idx<a.idx)
				return true;
		}
	}
	return false;
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> s(n),t(m);
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<m;i++)
		cin>>t[i];
	vector<int> ans;
	vector<item> v;
	for(int i=0;i<n;i++)
	{
		v[i].time=0;
		v[i].wt=s[i];
		v[i].idx=i;
	}
	priority_queue<item, vector<item>, comp> q;
	for(int i=0;i<n;i++)
	{
		q.push(v[i]);
	}
	for(int i=0;i<m;i++)
	{
		item x=q.top();
		q.pop();
		ans.push_back(x.idx);
		x.time=x.time+t[i];
		q.push()
	}
}