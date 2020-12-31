#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	int flag=1;
	cin>>n>>m;
	vector< vector<int> > v(n,vector<int> (m));
	for(int i=0;i<n;i++)
	{
		cin>>v[i][0];
		for(int j=1;j<m;j++)
		{
			cin>>v[i][j];
			if(v[i][j]!=v[i][j-1])
				flag=0;
		}
	}
	if(flag==0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		int f=1;
		for(int i=0;i<n;i++)
		{
			if(i-1>=0 && v[i][0]==v[i-1][0]){
				f=0;
				break;
			}
			if(i+1<n && v[i+1][0]==v[i][0])
			{
				f=0;
				break;
			}
		}
		if(f==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}