#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x,cost=0,flag=0;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> b(n);
		vector<int> use(n,1);
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>x;
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
		{
			// cout<<"i is "<<i<<endl;
			if(a[i]<=k)
				continue;
			else
			{
				int m=ceil(((float)a[i]-k)/x);
				// cout<<"m is "<<m<<endl;
				while(m--)
				{
					int min=INT_MAX,pos;
					flag=0;
					for(int j=i;j>=0;j--)
					{
						if(min>b[j] && use[j]==1)
						{
							min=b[j];
							pos=j;
						}
					}
					if(min==INT_MAX)
					{
						cout<<-1<<endl;
						flag=1;
						break;
					}
					use[pos]=-1;
					cost=cost+min;
					// cout<<"cost is "<<cost;
					k=k+x;
					// cout<<"k is "<<k<<endl;
				}
				if(flag==1)
					break;
				if(a[i]>k)
				{
					flag=1;
					break;
				}
			}

		}
		if(flag!=1)
		{
			cout<<cost<<endl;
		}

	}
}