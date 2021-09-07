#include<bits/stdc++.h>
using namespace std;
int dirX[]={1,0,-1,0};
int dirY[]={0,1,0,-1};
void dfs(vector<vector<char> > &v,vector<vector<char> > &ans,vector<vector<bool> > &visit,int m,int n,int i,int j)
{
	visit[i][j]=true;
	ans[i][j]='O';
	for(int k=0;k<4;k++)
	{
		int i1=i+dirY[k];
		int j1=j+dirX[k];
		if(i1>=0 && i1<m && j1>=0 && j1<n && v[i1][j1]=='O' && !visit[i1][j1])
		{
			dfs(v,ans,visit,m,n,i1,j1);
		}	
	}
}


int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<char> >v(m,vector<char>(n));
	vector<vector<char> >ans(m,vector<char>(n,'X'));
	vector<vector<bool> >visit(m,vector<bool>(n,false));
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	int i,j;
	i=0;
	for( j=0;j<n;j++)
	{
		if(v[i][j]=='O')
		{
			dfs(v,ans,visit,m,n,i,j);
		}
	}
	i=m-1;
	for( j=0;j<n;j++)
	{
		if(v[i][j]=='O')
		{
			dfs(v,ans,visit,m,n,i,j);
		}
	}
	j=0;
	for( i=1;i<m-1;i++)
	{
		if(v[i][j]=='O')
		{
			dfs(v,ans,visit,m,n,i,j);
		}
	}
	j=n-1;
	for( i=1;i<m-1;i++)
	{
		if(v[i][j]=='O')
		{
			dfs(v,ans,visit,m,n,i,j);
		}
	}
	cout<<"Final ans"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}