#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int> > v(n,vector<int>(n));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	int z=2*n-1,t=0;
	vector<vector<int> > v1(z);

	for(int i=0;i<n;i++)
	{
		int a=0;
		int b=i;
		v1[i].push_back(v[a][b]);
		while(a!=i||b!=0)
		{
			a=a+1;
			b=b-1;
			v1[i].push_back(v[a][b]);

		}

		t=i;
	}
	t=t+1;
	for(int i=1;i<n;i++)
	{
		int a=i;
		int b=n-1;  
		v1[t].push_back(v[a][b]);	
		while(a!=n-1||b!=i)                                  
		{
			a=a+1;
			b=b-1;
			v1[t].push_back(v[a][b]);
		}
		t++;
	}
	for(int i=0;i<z;i++)
	{
		for(int j=0;j<v1[i].size();j++)
		{
			cout<<v1[i][j]<<" ";

		}
		cout<<endl;
	}
}
