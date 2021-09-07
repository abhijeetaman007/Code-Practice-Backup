//Sieve of eratosthenes-->O(n(log2(log2(n))))  very much optimal as compared to O(n*sqrt(n))
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=1;
	cin>>n;
	vector<bool> prime(n+1,true);  //initially all are considered prime hence inital value is true
	prime.at(0)=false;  //0 is not prime
	prime.at(1)=false;	//1 is not prime
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=2;i*j<=n;j++)
			{
				prime[i*j]=false;
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		if(prime[i])
			cout<<i<<" ";
	}	
}