#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
void func(int i,int j,vector<vector<int> > &v,int &count,int c,int &ans,int n,int m)
{
	
	if(i>=n || j>=m || i<0 || j<0){
		return;
	}
	
	if(v[i][j]==-1)
		return;
	if(v[i][j]==2)
	{
		if(count==c)
		{
			ans++;
		}
		return;
	}
	int f=0;
	if(v[i][j]==0){
		c++;
		f=1;		
	}
	v[i][j]=-1;
	func(i+1,j,v,count,c,ans,n,m);
	func(i,j+1,v,count,c,ans,n,m);
	func(i-1,j,v,count,c,ans,n,m);
	func(i,j-1,v,count,c,ans,n,m);
	if(f==1)
		c--;
	v[i][j]=0;

}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int> >v(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>v[i][j];
	}
	int start_i,start_j;
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(v[i][j]==1)
			{
				start_i=i;
				start_j=j;
			}
			if(v[i][j]==0)
			{
				count++;
			}
		}
	}
	int ans=0;
	func(start_i,start_j,v,count,0,ans,n,m);
	cout<<"ans is "<<ans<<endl;
}