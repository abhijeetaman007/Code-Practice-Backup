//1905. Count Sub Islands
#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
void dfs(int i,int j,vector<vector<int> >&v,int m,int n,int c)
{
	v[i][j]=c;
	int dirX[]={-1,0,1,0};
	int dirY[]={0,1,0,-1};
	for(int k=0;k<4;k++)
	{
		if(i+dirY[k]>=0 && i+dirY[k]<m && j+dirX[k]>=0 && j+dirX[k]<n && v[i+dirY[k]][j+dirX[k]]==1)
		{
			dfs(i+dirY[k],j+dirX[k],v,m,n,c);
		}
	}

}
void dfs1(int i,int j,vector<vector<int> >&v1,vector<vector<int> >&v2,vector<vector<bool> >&visit,int m,int n,int c,bool &check)
{
	visit[i][j]=true;
	if(v1[i][j]==0 || c!=v1[i][j])
	{
		check=false;
	}
	int dirX[]={-1,0,1,0};
	int dirY[]={0,1,0,-1};
	for(int k=0;k<4;k++)
	{
		if(i+dirY[k]>=0 && i+dirY[k]<m && j+dirX[k]>=0 && j+dirX[k]<n && v2[i+dirY[k]][j+dirX[k]]==1)
		{

			if(!visit[i+dirY[k]][j+dirX[k]])
			dfs1(i+dirY[k],j+dirX[k],v1,v2,visit,m,n,c,check);
		}
	}
}

int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> >v1(m,vector<int>(n));
	vector<vector<int> >v2(m,vector<int>(n));
	vector<vector<bool> >visit(m,vector<bool>(n,false));	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v1[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v2[i][j];
		}
	}
	int c=2;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v1[i][j]==1)
			{
				dfs(i,j,v1,m,n,c);
				c++;
			}
		}
	}
	cout<<"Total islands in 1 "<<c-2<<endl;
	int ans=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v2[i][j]==1 && !visit[i][j])
			{
				cout<<"dfs called"<<endl;
				deb(i);
				deb(j);

				c=v1[i][j];
				bool check=true;
				dfs1(i,j,v1,v2,visit,m,n,c,check);
				ans=ans+check;
				deb(ans);
			}
		}
	}
	cout<<"Final ans"<<ans<<endl;
}

5 5
1 1 1 0 0
0 1 1 1 1
0 0 0 0 0
1 0 0 0 0 
1 1 0 1 1
1 1 1 0 0 
0 0 1 1 1
0 1 0 0 0 
1 0 1 1 0
0 1 0 1 0