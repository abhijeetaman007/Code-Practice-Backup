#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,p,k;
		cin>>n>>x>>p>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			{
				cin>>v[i];
			}
		sort(v.begin(),v.end());
		int pos,flag=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]==x)
			{
				pos=i+1;
				flag=1;
				break;
			}
		}
		int ans=0;
		if(flag==0)
		{	
			v[k-1]=x;
			sort(v.begin(),v.end());
			for(int i=0;i<n;i++)
		{
			if(v[i]==x)
			{
				pos=i+1;
				break;
			}
		}
		ans=1;
		}
			if(p==pos)
			{
				cout<<0<<endl;
			}
			else 
				if(k>=p && v[p-1]>=x)
				{
					cout<<-1<<endl;
				}
				else 
					if(p>=k && v[p-1]<=x)
				{
					cout<<-1<<endl;
				}
				else
				{
					ans=ans+abs(pos-p);
					cout<<ans<<endl;
				}

	}
}