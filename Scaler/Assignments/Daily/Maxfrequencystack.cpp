#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector< vector<int> >v(n,vector<int> (2));
	for(int i=0;i<n;i++)
	{
		cin>>v[i][0]>>v[i][1];
	}
	map<int,stack<int> >m2;
	map<int,int>m1;
	vector<int> ans;
	int max=0;
	for(int i=0;i<n;i++)
	{
		// cout<<"max is "<<max<<endl;
		if(v[i][0]==1)
		{
			m1[v[i][1]]++;
			if(max<m1[v[i][1]])
				max=m1[v[i][1]];
			m2[m1[v[i][1]]].push(v[i][1]);
			ans.push_back(-1);
		}
		if(v[i][0]==2)
		{
			ans.push_back(m2[max].top());
			m1[m2[max].top()]--;
			m2[max].pop();
			if(m2[max].empty())
				max--;
		}
	}
	for(int i=0;i<n;i++)
	cout<<ans[i]<<" "; 
}