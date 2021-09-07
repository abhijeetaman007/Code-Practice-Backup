#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	multiset<int> m;
	vector<int>v(n);
	set<multiset<int> >s;
	vector<vector<int> >ans;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		m.insert(v[i]);
	}
	// int i=0;
	// int j=n-1;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			// vector<int> v1;
			long long int sum=v[i]+v[j];
			sum=sum*(-1);
			m.erase(m.find(v[i]));
			m.erase(m.find(v[j]));
			multiset<int> x;
			if(m.find(sum)!=m.end())
			{
				x.insert(v[i]);
				x.insert(v[j]);
				x.insert(sum);
			}
			if(x.size()!=0)
			s.insert(x);
			m.insert(v[i]);
			m.insert(v[j]);			
		}
	}
	for(auto itr=s.begin();itr!=s.end();itr++)
	{
		std::vector<int> v1;
		for(auto it=(*itr).begin();it!=(*itr).end();it++)
		{
			v1.push_back(*it);
		}
		ans.push_back(v1);
	}
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}

}
