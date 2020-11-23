#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	int max=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(max<v[i])
			max=v[i];
	}
	cout<<max<<endl;
	vector<bool> prime(max+1,true);
	vector<int> finalprime;
	prime.at(0)=false;
	prime.at(1)=false;
	for(int i=2;i<=max;i++)
	{	
		if(prime[i])
		{
			finalprime.push_back(i);
			for(int j=2;i*j<=max;j++)
			{
				prime[i*j]=false;
			}
		}
	}
	int count=0;
	for(int i=0;i<finalprime.size();i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v[j]%finalprime[i]==0)
			{
				count+=1;
				break;
			}
		}
	}
	cout<<"Ans is "<<count<<endl;
}