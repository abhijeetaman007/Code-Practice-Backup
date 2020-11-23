#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int j;
	for(int i=1;i<n;i++)
	{
		int key=v[i];
		for(j=i;j>=1;j--)
		{
			if(v[j-1]>key)
				v[j]=v[j-1];
			else
				break;
		}
		v[j]=key;
	}
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
}