#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
void dfs(vector<vector<int> > &v,vector<vector<bool> > &visit,vector<int>&dirX,vector<int>&dirY,int x,int y,int m,int n)
{
	if(visit[x][y])
		return;
	deb("DFS");
	deb(x); 	
	deb(y);
	visit[x][y]=true;
	for(int i=0;i<dirX.size();i++)
	{
		deb(i);
		// deb("checking");
		// deb(x+dirX[i]);
		// deb(y+dirY[i]);
		// deb(m);
		// deb(n);
		// if(x+dirX[i]==2 && y+dirY[i]==0)
		// deb(v[x+dirX[i]][y+dirY[i]]);
		if(x+dirX[i]<n && x+dirX[i]>=0 && y+dirY[i]>=0 && y+dirY[i]<m && v[x+dirX[i]][y+dirY[i]]==0 )
		{
				// deb("Inside1");

			if(!visit[x+dirX[i]][y+dirY[i]]){
				// deb("Inside2");
				
				dfs(v,visit,dirX,dirY,x+dirX[i],y+dirY[i],m,n);
			}
		}
	}
	// deb(x);
	// deb(y);
	// deb("Out");
}



int main()
{
	int n,x,y,r;
	vector<int> a,b;
	cin>>n>>x>>y>>r;
	for(int i=0;i<n;i++)
	{
		int x1;
		cin>>x1;
		a.push_back(x1);
	}
	for(int i=0;i<n;i++)
	{
		int x1;
		cin>>x1;
		b.push_back(x1);
	}
	vector<vector<bool > >visit(y+1,vector<bool> (x+1,false));
	vector<vector<int> >v(y+1,vector<int> (x+1,0));
	deb(x);
	deb(y);
	// x=100;y=100;
	// deb("Grid");
	// for(int i=0;i<y+1;i++)
	// {
	// 	for(int j=0;j<x+1;j++)
	// 	{
	// 		cout<<v[i][j]<<" ";
	// 	}
	// 	deb(i);
	// 	cout<<endl;
	// }
	// deb("Gridend");

	for(int i=0;i<y+1;i++)
	{
		for(int j=0;j<x+1;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(pow(r,2) >=pow((a[k]-j),2)+pow((b[k]-i),2))
				{
					v[i][j]=1;
				}
				if(v[i][j]==1)
					break;
			}
		}
	}

	// deb("Grid");
	// for(int i=0;i<y+1;i++)
	// {
	// 	for(int j=0;j<x+1;j++)
	// 	{
	// 		cout<<v[i][j]<<" ";
	// 	}
	// 	deb(i);
	// 	cout<<endl;
	// }
	// deb("Gridend");


	vector<int> dirX={-1,0,1,-1,1,-1,0,1};
	vector<int> dirY={-1,-1,-1,0,0,1,1,1};
	for(int i=0;i<dirX.size();i++)
		deb(i);

	dfs(v,visit,dirX,dirY,0,0,y+1,x+1);

	cout<<"Final ans "<<visit[x][y]<<endl;

}

