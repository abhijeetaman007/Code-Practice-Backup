#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int f=0;
		vector<int> v;
		vector<int> v1;
		unordered_map<int,int> m;
		int a;
		int	ans=INT_MAX;
		for(int i=0;i<n;i++)
		{	cin>>a;
			v.push_back(a);
			if(f==0)
			{
				v1.push_back(a);
				f=1;
			}
			else
			{
				if(v1[v1.size()-1]!=a)
				v1.push_back(a);
			}
		}
		for(int i=0;i<v1.size();i++)
		{
			m[v1[i]]++;
		}
		m[v1[0]]--;
		auto it=m.end();
		for(auto itr=m.begin();itr!=it;itr++)
		{
			if(itr->first!=v[n-1])
			(itr->second)=(itr->second)+1;
		}
		for(auto itr=m.begin();itr!=m.end();itr++)
		{
			// cout<<itr->second<<" ";	
			if(ans>itr->second)
				ans=itr->second;
		}
		cout<<ans<<endl;
	}
}