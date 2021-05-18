#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		if(k==n)
		{
			for(long long int i=1;i<=n;i++)
				cout<<i<<" ";
		}
		else
		{
			vector<int> v(n);
			for(long long int i=0;i<n;i++)
				v[i]=(i+1)*(-1);
			long long int N=ceil((double)n/2);
			long long int m=min(k,N);
			long long int c=0;
			long long int j=0;
			while(c<m)
			{
				v[j]=v[j]*(-1);
				c++;
				j=j+2;
			}
			if(c<k)
			{
				j=n-1;
				while(c<k)
				{
					if(v[j]<0)
					{
						v[j]=v[j]*(-1);
						c++;	
					}
					j--;
				}
			}
			for(long long int i=0;i<n;i++)
				cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}