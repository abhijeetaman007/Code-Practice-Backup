#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	vector<int> v,v1;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	int min=v[1]-v[0];
	for(int i=0;i<n-1;i++)
	{
		if(v[i+1]-v[i]<min)
		{
			min=v[i+1]-v[i];
			v1.clear();
			v1.push_back(v[i]);
			v1.push_back(v[i+1]);
		}
		else
		{
			if(v[i+1]-v[i]==min)
			{
				v1.push_back(v[i]);
				v1.push_back(v[i+1]);	
			}
		}
	}
	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
}