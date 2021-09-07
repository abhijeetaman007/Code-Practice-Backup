#include<bits/stdc++.h>
using namespace std;
int nearest(int n)
{
    int pos = floor(log2(n));
    if(pos%2==0)
    	pos=pos-1;
    return pow(2, pos);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x;
		cin>>n>>x;
		long long int ans=0;
		if(x==0 && n&1)
		{
			ans=-1;
		}
		else
		{
			int flag=0;
			while(n!=0)
			{
				// deb(n);
				int a=nearest(n);
				int b=-1;
				if(flag!=1)
				{
					if(n&1)
					{
						if(n<=x)
						{
							b=n;
						}
					}
					else
					{
						if(n<=x)
						{
							b=n;
						}
					}
				}
				if(a<b)
				{
					flag=1;
					n=n-b;
				}
				else
				{
					n=n-a;
				}
				ans++;
			}
			
		}
		cout<<ans<<endl;
	}
}