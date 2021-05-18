#include<bits/stdc++.h>
using namespace std;
vector<int> nextsmallerleft(vector<int> v)
{
	int n=v.size();
	vector<int> ans(n,-1);
	stack<int> s;
	for(int i=n-1;i>=0;i--)
	{
		if(s.empty())
		{
			s.push(i);
		}
		else
		{
			if(v[i]>=v[s.top()])
			{
				s.push(i);
			}
			else
			{
				while(!s.empty() && v[i]<v[s.top()])
				{
					ans[s.top()]=i;
					s.pop();
				}
				s.push(i);
			}
		}
	}
	return ans;
}

vector<int> nextsmallerright(vector<int> v)
{
	int n=v.size();
	vector<int> ans(n,n);
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		if(s.empty())
		{
			s.push(i);
		}
		else
		{
			if(v[i]>=v[s.top()])
			{
				s.push(i);
			}
			else
			{
				while(!s.empty() && v[i]<v[s.top()])
				{
					ans[s.top()]=i;
					s.pop();
				}
				s.push(i);
			}
		}
	}
	return ans;
}





int main()
{
	int n;
	cin>>n;
	vector<int> v(n),l,r;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	l=nextsmallerleft(v);
	r=nextsmallerright(v);
	long long int area=0,mx=0;
	for(int i=0;i<n;i++)
	{
		area=(long long int)(v[i])*((long long int)r[i]-l[i]-1);
		// cout<<"current area is "<<area<<endl;
		if(area>mx)
			mx=area;
	}
	cout<<mx<<endl;
}