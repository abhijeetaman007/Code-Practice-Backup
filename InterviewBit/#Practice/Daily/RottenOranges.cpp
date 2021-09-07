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
	vector<vector<bool> >visit(m,vector<bool>(n,false));
	vector<vector<int> >time(m,vector<int>(n,INT_MAX));
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	queue<triplet> q;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v[i][j]==2)
			{
				triplet temp;
				temp.a=i;
				temp.b=j;
				temp.c=0;
				q.push(temp);
			}
		}
	}

	while(!q.empty())
	{
		triplet t=q.front();
		q.pop();
		visit[t.a][t.b]=true;
		v[t.a][t.b]=2;
		time[t.a][t.b]=t.c;
		time[t.a][t.b]=min(time[t.a][t.b],t.c);
		for(int i=0;i<4;i++)
		{
			int i1=t.a+dirY[i];
			int j1=t.b+dirX[i];
			if(i1>=0 && j1>=0 && i1<m && j1<n && v[i1][j1]==1 && !visit[i1][j1])
			{
				triplet temp;
				temp.a=i1;
				temp.b=j1;
				temp.c=t.c+1;
				q.push(temp);			
			}
		}
	}
	int ans=05t;
	cout<<"Time"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<time[i][j]<<" ";
			if(v[i][j]!=0 && time[i][j]>ans )
			{
				ans=time[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"Final Ans"<<endl;
	if(ans==INT_MAX)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;
}