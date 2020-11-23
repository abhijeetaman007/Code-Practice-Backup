#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=1000000;
	vector<bool> prime(n+1,true);
	prime.at(0)=false;
	prime.at(1)=false;
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=2;i*j<=n;j++)
				prime[i*j]=false;
		}
	}
	int num;
	cin>>num;
	int c=0;
	for(int i=0;i<num;i++)
	{
		int a;
		cin>>a;
		if(prime[a])
			c+=1;
	}
	cout<<pow(2,c)-1<<endl;
}