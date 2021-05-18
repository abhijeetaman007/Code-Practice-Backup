#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		vector<int> LIS(n,0);
		vector<int> count(n,1);
		LIS[0]=1;
		for(int i=1;i<n;i++)
		{
			int temp=INT_MIN;
			for(int j=0;j<i;j++)
			{
				if(v[j]<v[i])
				{
					LIS[i]=max(LIS[j],LIS[i]);
				}
			}
			LIS[i]+=1;
		}
		count[0]=1;
		for(int i=1;i<n;i++)
		{
			int j=i-1;
			int ans=0;
			while(j>=0)
			{
				if(v[j]<v[i])
				{
					if(LIS[j]>=LIS[i])
					{	
						j--;
						continue;
					}
					if(LIS[j]+1==LIS[i])
					{
						ans+=count[j];
						// j--;
					}
					// else
					// {
					// 	break;
					// }
				}
					j--;

			}
			count[i]=max(count[i],ans);
		}
		int ans=0;
		int max=*max_element(LIS.begin(),LIS.end());
		for(int i=0;i<n;i++)
		{
			if(LIS[i]==max)
			{
				ans=ans+count[i];
			}
		}
		for(auto x:LIS)
			cout<<x<<" ";
		cout<<endl;
		for(auto x:count)
			cout<<x<<" ";
		cout<<"final ans "<<ans<<endl;
	}
}