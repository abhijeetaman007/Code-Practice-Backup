//Distict primes --> concept of sieve with spf
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	//Preprocessing to store all prime factors till 10^6
	//sieve + spf
	n=100000;
	vector<int> spf(n+1);
	vector<bool> prime(n+1,true);
	prime.at(0)=false;
	prime.at(1)=false;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;i*j<=n;j++)
		{
			if(prime[i])
			{
				spf[i*j]=i;
				if(j!=1)
				prime[i*j]=false;
			}
		}
	}

	//storing prime factors
	vector<vector<int> > primefact(n+1);
	primefact[0].push_back(0);
	primefact[1].push_back(1);
	for(int i=2;i<100000;i++)
	{
		int num=i;
		while(num>1)
		{
			a=spf[num];
			primefact[i].push_back(a);
			num=num/a;
		}
	}
	for(int i=0;i<100000;i++)
	{
		for(int j=0;j<primefact[i].size();j++)
			cout<<primefact[i][j]<<" ";
		cout<<endl;
	}
	set<int> s;
	for(int i=0;i<v.size();i++)
	{
		cout<<"for "<<v[i]<<endl;
		for(int j=0;j<primefact[v[i]].size();j++)
		{
				// cout<<"test "<<primefact[v[i]][j]<<endl;
				// if(s.find(primefact[v[i]][j])==s.end()){
				// 	s.insert(primefact[v[i]][j]);
				// 	cout<<primefact[v[i]][j]<<endl;
				// }
					s.insert(primefact[v[i]][j]);

		}
	}
	for(auto x: s)
		cout<<x<<" ";


}