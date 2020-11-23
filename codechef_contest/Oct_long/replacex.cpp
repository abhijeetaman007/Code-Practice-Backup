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
		if(flag==0)
		{
			if(p>k)
			{
				if(x<v[p-1])
				{
					cout<<-1<<endl;
					continue;
				}
				else
				{
					int c=0;
					for(int i=p-1;i<n;i++)
					{
						// cout<<"inside"<<endl;
						cout<<v[i]<<endl;
						if(v[i]<x)
							c=c+1;
					}
					cout<<c<<endl;
					continue;
				}
			}
			if(p<k)
			{
				// cout<<x<<" "<<v[p]<<endl;
				if(x>v[p-1])
				{
					cout<<-1<<endl;
					continue;
				}
				else
				{
					int c=0;
					for(int i=p-1;i>=0;i--)
						{
							if(v[i]>x)
								c=c+1;
						}
					cout<<c<<endl;
					continue;
				}

			}

		}
		else
		{
			if(p<=pos)
			{
				if(k<p)
				{
					cout<<pos-p<<endl;
				}
				else
					cout<<-1<<endl;
			}
			else
			{
				if(k>p)
					cout<<p-pos<<endl;
				else
					cout<<-1<<endl;
			}
		}
	}
}