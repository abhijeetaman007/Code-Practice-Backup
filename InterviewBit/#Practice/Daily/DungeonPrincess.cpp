#include<bits/stdc++.h>
using namespace std;

int solve(int m,int n,vector<vector<int> > &v)
{
	cout<<"solve"<<endl;
	vector<vector <pair<int,int> > >ans(m,vector <pair<int,int> >(n));
	ans[0][0].first=v[0][0];
	ans[0][0].second=v[0][0];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 && j==0)
				continue;
			if(i-1<0)
			{
				ans[i][j].first=ans[i][j-1].first+v[i][j];
				ans[i][j].second=min(ans[i][j-1].second,v[i][j]+ans[i][j-1].second);
				continue;
			}
			if(j-1<0)
			{
				ans[i][j].first=ans[i-1][j].first+v[i][j];
				ans[i][j].second=min(ans[i-1][j].second,v[i][j]+ans[i-1][j].second);
				continue;	
			}
			pair<int,int> temp;
			if(ans[i][j-1].second>ans[i-1][j].second)
				temp=ans[i][j-1];
			else
				temp=ans[i-1][j];
			ans[i][j].first=temp.first+v[i][j];
			ans[i][j].second=min(temp.second,temp.second+v[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ans[i][j].first<<" ";	
		}
		cout<<endl;
	}
	return ans[m-1][n-1].first>0?0:((ans[m-1][n-1].first*-1)+1); 
}


int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> >v(m,vector<int> (n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	cout<<solve(m,n,v);	
}