#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x,p,k,flag=0;
		cin>>n>>x>>p>>k;
		vector<int> v(n);
		for(long long int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		long long int pos;
		for(long long int i=0;i<n;i++)
		{
			if(v[i]==x)
			{
				flag=1;
				pos=i;
				break;
			}
		}
		pos=pos+1;
		// cout<<"flag is "<<flag<<endl;
		if(flag==0)
		{
			if(k<p)
			{
				if(x<v[p-1])
				{
					cout<<-1<<endl;
					continue;
				}
				else
				{
					if(x>v[p-1])
					{
						long long int c=0;
						for(long long int i=p-1;i<n;i++)
						{
							if(v[i]<x)
								c=c+1;
							else
								break;
						}
						cout<<c<<endl;
						continue;
					}
				}
			}
			if(k>p)
			{
				if(x>v[p-1])
				{
					cout<<-1<<endl;
					continue;
				}
				else
				{
					long long int c=0;
					for(long long int i=p-1;i>=0;i--)
					{
						if(v[i]>x)
							c=c+1;
						else
							break;
					}
					cout<<c<<endl;
					continue;
				}
			}
			if(k==p)
			{
				if(x>v[p-1])
				{
					long long int c=0;
					for(long long int i=p-1;i<n;i++)
					{
						if(v[i]<x)
							c=c+1;
						else
							break;
					}
					cout<<c<<endl;
					continue;
				}
				if(x<v[p-1])
				{
					long long int c=0;
					for(long long int i=p-1;i>=0;i--)
					{
						if(v[i]>x)
							c=c+1;
						else
							break;
					}
					cout<<c<<endl;
					continue;
				}
			}
		}
			else		
			{
				if(k<p)
				{
					if(x<v[p-1])
					{
						cout<<-1<<endl;
						continue;
					}
					else
					{
						cout<<pos-p<<endl;
					}
				}
				if(k>p)
				{
					if(x>v[p-1])
					{
						cout<<-1<<endl;
						continue;	
					}
					else
					{
						cout<<p-pos<<endl;
					}
				}
				if(k==p)
				{
					if(x>v[p-1])
						cout<<pos-p<<endl;
					else
					{
						cout<<p-pos<<endl;
					}
				}
			}
		}
	}
