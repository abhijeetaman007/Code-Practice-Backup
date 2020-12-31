#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int mx=*max_element(v.begin(),v.end());
	vector<bool>prime(mx+1,true);
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i<=mx;i++)
	{
		for(int j=i;i*j<=mx;j++)
		{
			prime[i*j]=false;
		}
	}
	vector<int> p;
	for(int i=0;i<prime.size();i++)
	{
		if(prime[i]){
			cout<<i<<" ";
			p.push_back(i);
		}
	}
	cout<<endl;
	std::vector<int> count(p.size(),0);
	sort(v.begin(),v.end());
	int k=0;
	int i=0;
	while(i<v.size())
	{
		cout<<"v "<<v[i]<<" p "<<p[k]<<endl;
		if(v[i]>=p[k] && v[i]<p[k+1] && k+1<p.size() || k+1>=p.size() && v[i]>=p[k])
		{
			count[k]++;
			i++;
		}
		else
			k++;
	}
	long long int ans=0;
	for(int i=0;i<count.size();i++)
	{
		ans=ans+(pow(2,count[i])-1);
	}
	cout<<ans<<endl;
}