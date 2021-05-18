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
		long long int pos=0;
		for(long long int i=0;i<n;i++)
		{
			if(v[i]==x)
			{
				flag=1;
				pos=i;
				break;
			}
		}
		if(flag==0)
			v[k-1]=x;
		sort(v.begin(),v.end());
		if(flag==0)
		{
		  for(long long int i=0;i<n;i++)
		 	{
				 if(v[i]==x)
				 {
				// flag=1;
					pos=i;
					break;
				}
		 	}
	 	}
		pos=pos+1;
		// cout<<pos<<endl;	
		// for(int i=0;i<v.size();i++)
		// 	cout<<v[i]<<" ";
		// cout<<endl;
		
				if(k<p)
				{
					if(x<v[p-1])
					{
						cout<<-1<<endl;
						continue;
					}
					else
					{
						if(flag==0)
						cout<<(pos-p+1)<<endl;
						else
						cout<<pos-p<<endl;
					}
				}
				else
				{
					if(x>v[p-1])
					{
						
						cout<<-1<<endl;
						continue;	
					}
					else
					{
						if(flag==0)
						cout<<(pos-p+1)<<endl;
						else
						cout<<p-pos<<endl;
					}
				}
				// if(k==p)
				// {
				// 	if(x>v[p-1])
				// 	{
				// 		if(flag==0)
				// 		cout<<(pos-p+1)<<endl;
				// 		else
				// 		cout<<pos-p<<endl;
				// 	}
				// 	else
				// 	{
				// 		if(flag==0)
				// 		cout<<(pos-p+1)<<endl;
				// 		else
				// 		cout<<p-pos<<endl;
				// 	}
				// }
			// }
		}
	}
