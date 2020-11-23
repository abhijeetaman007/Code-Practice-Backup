// Time complexity O(nlogn)
#include<bits/stdc++.h>
using namespace std;
int main(){
	//Preprocessing to store all prime factors till 10^6
		int n,a;
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
	// int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
		cin>>v[i];
	// unordered_set<int> s;
	
	// unordered_map<vector<int>,vector<int> >m;
	unordered_map< vector<int> , vector<int> >m;
	// //storing prime factors
	// vector<vector<int> > primefact(n+1);
	// primefact[0].push_back(0);
	// primefact[1].push_back(1);
	// for(int i=2;i<100000;i++)
	// {
	// 	int num=i;
	// 	while(num>1)
	// 	{
	// 		a=spf[num];
	// 		primefact[i].push_back(a);
	// 		num=num/a;
	// 	}
	// }
	// set<int> s;
	// for(int i=0;i<v.size();i++)
	// {
	// 	for(int j=0;j<primefact[v[i]].size();j++)
	// 	{
	// 	        if(v[i]!=0 && v[i]!=1)
 //    			s.insert(primefact[v[i]][j]);
	// 	}
	// }
	// return s.size();
	for(int i=0;i<n;i++)
	{
		vector<int> s;
		int num=v[i];
		while(num>1)
		{
			a=spf[num];
			s.push_back(a);
			num=num/a;
		}
		unique(s.begin(),s.end());
		// auto itr=m.begin();
		

		m[s].push_back(v[i]);
	}


}
