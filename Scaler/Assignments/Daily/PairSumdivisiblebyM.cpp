#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	int M=1000000007;
	long long int c=0;
	vector<bool> rem(k,false);
	unordered_map<int,vector<int> > m;
	for(int i=0;i<n;i++)
	{
		m[v[i]%k].push_back(v[i]);
	}
	n=m[0].size();
	c=(c%M+((n*(n-1))/2)%M)%M;
	if(k%2==0)
	{
		n=m[k/2].size();
		c=(c%M+((n*(n-1))/2)%M)%M;
		rem[k/2]=true;
	}
	cout<<c<<endl;	
	for(int i=1;i<k;i++)
	{
		if(rem[i]==false)
		{

			if(m.find(i)!=m.end())
			{
				if(m.find(k-i)!=m.end())
				{
					cout<<"i is "<<i<<" k-i is "<<k-i<<endl;
					int a=m[i].size();
					int b=m[k-i].size();
					c=(c%M+(a*b)%M)%M;
					// c=c+(a*b);
					cout<<"c is "<<c<<endl;
					// rem[i]=true;
					// rem[k-i]=true;		
				}
			}
			rem[i]=true;
			rem[k-i]=true;
		}

	}
	cout<<"Ans is "<<c<<endl;
}