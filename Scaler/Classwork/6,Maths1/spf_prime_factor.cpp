#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<set<int> ,vector<int> >m;
	
	int mx=1e3;// set till where prime factor is needed and rum

	vector<bool> prime(mx+1,true);
	prime[0]=false;
	prime[1]=false;
	vector<int> spf(mx+1,0);

	for(int i=2;i<=mx;i++)
	{
		if(prime[i])
		{
			spf[i]=i;
			for(int j=2;i*j<=mx;j++)
			{
				prime[i*j]=false;
				spf[i*j]=i;
			}
		}
	}
	map<int,set<int> > m1;
	for(int i=2;i<=mx;i++)
	{
		int num=i;
		while(num>1)
		{
			int y=spf[num];
			m1[i].insert(y);
			num=num/y;
		}
	}
	for(auto it=m1.begin();it!=m1.end();it++)
	{
		cout<<it->first<<" : ";
		for(auto itr=(it->second).begin();itr!=(it->second).end();itr++)
			cout<<*itr<<" ";
		cout<<endl;
	}
}