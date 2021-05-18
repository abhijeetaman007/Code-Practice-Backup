#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int b,e,t;
	int ans;
	vector<int> a;
	while(n--)
	{
		cin>>b>>e>>t;
		int t1=t,value,flag=0;
		if(b==e)
		ans=t;
		else
		{
			int pres,delay=0;
			value=t1%(2*x-2);
			if(value>x-1)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
			if(flag==0)
			{
				pres=value+1;
			}
			else
			{
				pres=2*x-value-1;
			}
			cout<<"pres is "<<pres<<endl;
			if(flag==0)
			{
				if(pres<=b)
				{

					delay=b-pres;
				}
				else
				{
					delay=(x-pres)+(x-b);
				}
			}
			else
			{
				if(pres>=b)
				{
					delay=pres-b;
				}
				else
				{
					// delay=(x-pres)+(x-b);
					delay=(pres-1)+(b-1);
				}
			}
			cout<<"delay is "<<delay<<endl;
			int time=t+delay;
			int time_travel=0;
			 value=time%(2*x-2);
			if(value>x-1)
				flag=1;
			else
				flag=0;
			if(flag==0)
			{
				if(b<e)
				{
					time_travel=e-b;
				}
				else
				{
					time_travel=(x-b)+(x-e);
				}
			}	
			else
			{
				if(b>e)
				{
					time_travel=b-e;
				}
				else
				{
					time_travel=(b-1)+(e-1);				
					// time_travel=(x-b)+(x-e);
				}
			}
			ans=time_travel+delay+t;
		cout<<"travel time is "<<time_travel<<endl;
	}

		a.push_back(ans);
		cout<<ans<<endl;	
	}
	// for(auto y:a)
	// 	cout<<y<<endl;
	
}