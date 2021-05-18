#include<bits/stdc++.h>
using namespace std;
void func(int i,int n,vector<vector<int> > &ans,vector<int>&temp,vector<int>&v)
{
	if(i==n)
	{
		ans.push_back(temp);
		return;
	}
	func(i+1,n,ans,temp,v);
	temp.push_back(v[i]);
	func(i+1,n,ans,temp,v);
	temp.pop_back();
}

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	vector<vector<int> > ans;
	vector<int> temp;
	sort(v.begin(),v.end());
	func(0,n,ans,temp,v);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
