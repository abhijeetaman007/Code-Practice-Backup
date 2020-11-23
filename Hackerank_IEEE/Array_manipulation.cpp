//https://www.hackerrank.com/challenges/crush/problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,n;
	cin>>n>>m;
	vector<long long int> v(n);
	for(long long int i=0;i<m;i++)
	{
		long long int a,b,k;
		cin>>a;
		cin>>b;
		cin>>k;
		for(long long int j=a-1;j<=b-1;j++)
		{
			v[j]+=k;
		}
		// for(auto x:v)
		// 	cout<<x<<" ";
	}
	//cout<<endl;
	cout<<*max_element(v.begin(),v.end())<<endl;
}