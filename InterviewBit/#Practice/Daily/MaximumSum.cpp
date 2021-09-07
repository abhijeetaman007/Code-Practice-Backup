#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b,c,d;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cin>>b>>c>>d;
	int i=-1,j=-1,k=-1;
	vector<pair<int,int> v1;
	v1.push_back({b,i});
	v1.push_back({c,j});
	v1.push_back({d,k});
	sort(v.begin(),v.end());
	int mx=INT_MIN;
	int min=INT_MAX;
	int idx_max;
	int idx_min;
	int ans=0;
	for(int l=0;l<n;l++)
	{
		if(mx<v[l])
		{
			idx_max=l;
			mx=v[l];
		}
		if(mn>v[l])
		{
			idx_min=l;
			mn=v[l];
		}
	}
	if(v1[0]==b)
	{
		i=idx;
		mx=INT_MIN;
		mn=INT_MAX;
		if(b>0)
			ans=v1[0]*v[idx_max];
		else
			ans=v1[0]*v[idx_min];
		if(v1[1]==c)
		{
			for(int l=i;l<n;l++)
			{
				if(int max)
			}
		}
		else
		{

		}
	}
	else if(v1[0]==c)
	{
		j=idx;
	}else
	{
		k=idx;
	}
}	