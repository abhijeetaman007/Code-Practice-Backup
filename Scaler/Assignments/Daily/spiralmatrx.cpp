// Generate spiral array of continuos element q to n^2
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int tl,tr,bl,br;
	tl=0;
	tr=n-1;
	br=n-1;
	bl=0;
	int c=1;
	vector<vector<int> >v(n, vector<int>(n));
	// cout<<v.size();
	while(c<=n*n)
	{
		for(int i=bl;i<=tr;i++)
		{
			v[tl][i]=c;
			c++;
		}
		tl++;
		for(int i=tl;i<=br;i++)
		{
			v[i][tr]=c;
			c++;
		}
		tr--;
		for(int i=tr;i>=bl;i--)
		{
			v[br][i]=c;
			c++;
		}
		br--;
		for(int i=br;i>=tl;i--)
		{
			v[i][bl]=c;
			c++;
		}
		bl++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<v[i][j]<<"\t";
		}
		cout<<endl;
	}
}