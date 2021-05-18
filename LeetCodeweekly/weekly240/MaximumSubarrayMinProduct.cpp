#include<bits/stdc++.h>
using namespace std;
vector<int> minLeft(vector<int> &v)
{
	vector<int> ans(v.size(),-1);
	stack<int> s;
	for(int i=0;i<v.size();i++)
	{
		if(!s.empty())
		{
			if(v[s.top()]<v[i])
			{
				s.push(i);
			}
			else
			{
				while(!s.empty() && v[s.top()]>=v[i])
				{
					int idx=s.top();
					s.pop();
					if(!s.empty())
					{
						ans[idx]=s.top();
					}
				}
				s.push(i);
			}
		}
		else
		{
			s.push(i);
		}
	}
	while(!s.empty())
	{
		int idx=s.top();
		s.pop();
		if(!s.empty())
		ans[idx]=s.top();
	}
	return ans;
}

vector<int> minRight(vector<int> &v)
{
	cout<<"v.size "<<v.size()<<endl;
	vector<int> ans(v.size(),v.size());
	stack<int> s;
	for(int i=v.size()-1;i>=0;i--)
	{
		if(!s.empty())
		{
			if(v[s.top()]<v[i])
			{
				s.push(i);
			}
			else
			{
				while(!s.empty ()&& v[s.top()]>=v[i])
				{
					int idx=s.top();
					s.pop();
					if(!s.empty())
					{
						ans[idx]=s.top();
					}
				}
				s.push(i);
			}
		}
		else
		{
			s.push(i);
		}
	}
	while(!s.empty())
	{
		int idx=s.top();
		s.pop();
		if(!s.empty())
		ans[idx]=s.top();
	}
	return ans;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		vector<int> v1(n),v2(n);
		v1=minLeft(v);
		cout<<"minLeft"<<endl;
		for(int i=0;i<v1.size();i++)
		{
			cout<<v1[i]<<" ";
		}
		cout<<"\nminRight"<<endl;
		v2=minRight(v);
		for(int i=0;i<v2.size();i++)
		{
			cout<<v2[i]<<" ";
		}
		cout<<endl;
		vector<int> prefix(n+1,0);
		for(int i=1;i<=n;i++)
		{
			prefix[i]=prefix[i-1]+v[i-1];
		}
		cout<<"prefix"<<endl;
		for(int i=0;i<=n;i++)
		{
			cout<<prefix[i]<<" ";
		}
		long long int ans=INT_MIN;
		for(int i=0;i<n;i++)
		{
			cout<<"in "<<i<<endl;
			cout<<v2[i]+1<<endl;
			cout<<v1[i]<<endl;
			long long int sum=prefix[v2[i]]-prefix[v1[i]+1];
			cout<<"sum is "<<sum<<endl;
			long long int a=v[i]*(sum);
			ans=max(ans,a);
		}
		cout<<"Final ans is "<<ans<<endl;
	}
}