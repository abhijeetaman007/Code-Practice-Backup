#include<bits/stdc++.h>
using namespace std;
vector<int> dirX={0,1,0,-1};
vector<int> dirY={1,0,-1,0};
void dfs(int i,int j,vector<vector<char> >&v,vector<vector<bool> >&visit,int m,int n)
{
	visit[i][j]=true;
	for(int k=0;k<4;k++)
	{
		int i1=i+dirY[k];
		int j1=j+dirX[k];
		if(i1>=0 && j1>=0 && i1<m && j1<n && !visit[i1][j1])
		{
			if(v[i][j]=='X')
			dfs(i1,j1,v,visit,m,n);
		}
	}
}



int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<char> > v(m,vector<char> (n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	vector<vector<bool> > visit(m,vector<bool> (n,false));
	int ans=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(!visit[i][j] && v[i][j]=='X')
			{
				ans++;
				dfs(i,j,v,visit,m,n);		
			}
		}
	}
	cout<<"Ans is "<<ans;
}