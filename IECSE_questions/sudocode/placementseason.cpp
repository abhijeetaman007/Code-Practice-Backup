#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,s;
	cin>>n>>m>>s;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];

	int count=0;
	for(int i=0;i<n-s+1;i++)
	{
		int j=i+s,c=0;
		for(int k=i;k<j;k++)
		{
			if(v[k]<=m)
			{
				c+=1;
				// cout<<"c is "<<c<<endl;
			}
			else
				break;
		}
		if(c==s)
		{

			count+=1;
			// cout<<"count is "<<count<<endl;
		}
	}
	cout<<count<<endl;
}