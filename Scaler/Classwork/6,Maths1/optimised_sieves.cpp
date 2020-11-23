//Minor optimization inner loop starting from i as before that numbers would be cut so we will start checking from prime[i*i]  and other than that outer loop till sqrt(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<bool> prime(n+1,true);
	prime.at(0)=false;
	prime.at(1)=false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(prime[i]==true)
		{
			for(int j=i;i*j<=n;j++)
			{
				prime[i*j]=false;
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		if(prime[i])
			cout<<i<<" ";
	}
}