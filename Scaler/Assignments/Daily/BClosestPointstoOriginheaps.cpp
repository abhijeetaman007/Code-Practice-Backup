#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int> > v(n);
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v[i].push_back(x);
		cin>>x;
		v[i].push_back(x);
	}
	int b;
	cin>>b;

	priority_queue<pair<float,int>,vector<pair<float,int> >,greater<pair<float,int> > > pq;
	for(int i=0;i<n;i++)
	{
		pair<float,int> t;
		t.first=sqrt(pow(v[i][0],2)+pow(v[i][1],2));
		cout<<"dist "<<t.first<<endl;
		t.second=i;
		pq.push(t);
	}
	vector<vector<int> > ans(b);
	for(int i=0;i<b;i++)
	{
		cout<<"Loop 1"<<endl;
		pair<float,int> t=pq.top();

		cout<<"ans dist "<<t.first<<endl;
		ans.push_back(v[t.second]);
		for(int j=0;j<v[t.second].size();j++)
			cout<<v[t.second][j]<<" ";
		cout<<endl;
		cout<<t.second<<endl;
		pq.pop();
	}
	cout<<"ans "<<endl;
	for(int i=0;i<ans.size();i++)
	{
		cout<<"in"<<endl;
		// for(int j=0;j<ans[i].size();j++)
			cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
		cout<<endl;
	}
	cout<<"out"<<endl;
}