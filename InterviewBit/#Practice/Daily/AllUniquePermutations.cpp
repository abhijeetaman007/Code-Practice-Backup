#include<bits/stdc++.h>
using namespace std;
void func(int i,int n,vector<int> &v,vector<int> &temp,set<vector<int> >&s)
{
	if(i==n)
	{
		s.insert(temp);
		return;
	}
	for(int j=0;j<n;j++)
	{
		if(temp[j]==-1)
		{
			temp[j]=v[i];
			func(i+1,n,v,temp,s);
			temp[j]=-1;
		}
	}

}

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	vector<int> temp(n,-1);
	set<vector<int> >s;
	vector<vector<int> >ans;
	func(0,n,v,temp,s);
	for(auto itr=s.begin();itr!=s.end();itr++)
	{
		ans.push_back(*itr);
	}
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}