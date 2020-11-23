#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> > v(m,vector<int>(n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	int key;
	cin>>key;
	int low=0;
	int high=m*n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int i=mid/n;
		int j=mid%n;
		if(v[i][j]==key)
		{
			cout<<1<<endl;
			return 0;
			break;
		}
		else
		{
			if(v[i][j]<key)
			{
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}
	}
	cout<<0<<endl;

}