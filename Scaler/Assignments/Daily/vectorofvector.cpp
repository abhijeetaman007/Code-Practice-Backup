//pattern-2
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int> > v(n, vector<int> (n,0));
	for(int i=0;i<n;i++)
	{
		int x=1;
		for(int j=n-1;j>=n-1-i;j--)
		{
			v[i][j]=x;
			x++;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<v[i][j]<<"  ";
		}
		cout<<endl;
	}
}