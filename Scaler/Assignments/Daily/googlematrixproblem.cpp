#include<bits/stdc++.h>
using namespace std;

int solve(int m,int n,vector<vector<int> > &v)
{
	vector<vector<int> >ans(m,vector<int> (n,0));
	//here ans[i][j] means ways to reach (i,j) from (0,0)
	ans[0][0]=1;  //Since we are starting with (0,0)
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ans[i][j]!=0)   //checking if there is a way from start to reach (i,j) then only we assign ways to other index
			{
				if(i+v[i][j]<n)
					ans[i+v[i][j]][j]+=ans[i][j];
				if(j+v[i][j]<m)
					ans[i][j+v[i][j]]+=ans[i][j];					
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return ans[m-1][n-1];
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