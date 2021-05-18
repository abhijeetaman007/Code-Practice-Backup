#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> v1(n),v2(m),v(n+m);
	for(int i=0;i<n;i++)
		cin>>v1[i];
	for(int i=0;i<n;i++)
		cin>>v2[i];
	int i=0,j=0,k=0;
	while(i<n&&j<m)
	{
		if(v1[i]<v2[j])
		{
			v[k]=v1[i];
			i++;
		}
		else
		{
			v[k]=v2[j];
			j++;
		}
		k++;
	}
	while(i<n)
	{
		v[k]=v1[i];
		k++;
		i++;
	}	
	while(j<m)
	{
		v[k]=v2[j];
		k++;
		j++;
	}
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}		
}