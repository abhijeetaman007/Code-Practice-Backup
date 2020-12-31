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


long long int histogram(vector<int> v)
{
	// for(int i=0;i<v.size();i++)
		// cout<<v[i]<<" ";
	// cout<<endl;
	int n=v.size();
	vector<int> l,r;
	l=nextsmallerleft(v);
	r=nextsmallerright(v);
	long long int area=0,mx=0;
	for(int i=0;i<n;i++)
	{
		area=(long long int)(v[i])*((long long int)r[i]-l[i]-1);
		if(area>mx)
			mx=area;
	}
	return mx;
}

int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> > v((m),vector<int> (n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>v[i][j];
	}
	long long int ans=0,a;
	vector<int> v1(n,0);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v[i][j]!=0)
			v1[j]=v1[j]+v[i][j];
			else
				v1[j]=0;
		}
		a=histogram(v1);
		// cout<<"a is "<<a<<endl;
		if(a>ans)
		ans=a;
	}
	cout<<ans<<endl;

}