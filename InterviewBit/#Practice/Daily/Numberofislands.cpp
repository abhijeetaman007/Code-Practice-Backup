#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
void dfs(int i,int j,vector<vector<int> > &v,vector<vector<bool> > &visit,int m,int n)
{
	visit[i][j]=true;
	vector<int> dirX={-1,0,1,-1,1,-1,0,1};
	vector<int> dirY={-1,-1,-1,0,0,1,1,1};
	for(int k=0;k<8;k++)
	{
		if(i+dirY[k]>=0 && i+dirY[k]<m && j+dirX[k]>=0 && j+dirX[k]<n && v[i+dirY[k]][j+dirX[k]]==1)
		{
			if(!visit[i+dirY[k]][j+dirX[k]])
			{
				dfs(i+dirY[k],j+dirX[k],v,visit,m,n);
			}
		}
	}
}

int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> > v(m,vector<int> (n));
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
			if(!visit[i][j] && v[i][j]==1)
			{
				ans++;
				dfs(i,j,v,visit,m,n);
			}
		}
	}
	cout<<"Final ans is "<<ans<<endl;
}