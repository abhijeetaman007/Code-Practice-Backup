#include<bits/stdc++.h>
using namespace std;
vector<int> dirX={0,1,0,-1};
vector<int> dirY={1,0,-1,0};
class triplet
{
public:
	int a;
	int b;
	int c;
};
int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> >v(m,vector<int>(n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	vector<vector<int> >ans(m,vector<int>(n,INT_MAX));
	vector<vector<int> >visit(m,vector<int>(n));
	queue<triplet> q;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v[i][j]==1)
			{
				ans[i][j]=0;
				triplet temp;
				temp.a=i;
				temp.b=j;
				temp.c=0;
				visit[i][j]=true;
				q.push(temp);
			}
		}
	}
	while(!q.empty())
	{
		triplet t=q.front();
		q.pop();
		ans[t.a][t.b]=min(ans[t.a][t.b],t.c);
		for(int i=0;i<4;i++)
		{
			int i1=t.a+dirY[i];
			int j1=t.b+dirX[i];
			if(i1>=0 && j1>=0 && i1<m && j1<n && !visit[i1][j1])
			{
				triplet temp;
				temp.a=i1;
				temp.b=j1;
				temp.c=t.c+1;
				visit[i1][j1]=true;
				q.push(temp);
			}
		}
	}
	cout<<"Final"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ans[i][j]<<" ";
		}
	}
}