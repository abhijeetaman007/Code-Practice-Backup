//Printing Goldbasch numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<bool> prime(n+1,true);
	prime.at(0)=false;
	prime.at(1)=false;
	vector<long long int> v;
	vector<int> v1(2);
	for(long long int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			v.push_back(i);
			for(int j=2;i*j<=n;j++)
			{
				prime[i*j]=false;
			}
		}
	}
		for(long long int i=v.size()-1;i>=0;i--)
		{
				int a;
				a=n-v[i];
				if(prime[a])
				{
					v1[0]=a;
					v1[1]=v[i];
					break;
				}
		}
		for(long long int i=0;i<v1.size();i++)
			cout<<v1[i]<<" ";
	
}