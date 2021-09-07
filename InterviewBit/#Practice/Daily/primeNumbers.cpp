#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<bool> prime(n+1,true);
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i*i<=n;i++)
	{
		for(int j=i;i*j<=n;j++)
		{
			prime[i*j]=false;
		}
	}
	for(int i=0;i<=n;i++)
	{
		if(prime[i])
			cout<<i<<endl;
	}
}