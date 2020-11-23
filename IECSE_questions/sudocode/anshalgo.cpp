#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,ans=0;
		cin>>n>>m>>k;
		int min_num=INT_MAX;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(min_num>v[i] && (i%2==0))
				min_num=v[i];
		}
		if(n==1)
		{
			cout<<0<<endl;
			continue;
		}

			int req_moves=(v.size()/2)+1;
		if(m<req_moves)
			cout<<0<<endl;
		else
		{
			if(v.size()%2==0)
			{
				cout<<0<<endl;
				continue;
			}

			int a=m/req_moves;
			int flag=0;
			for(int i=0;i<k;i++)
			{
				for(int j=0;j<a;j++)
				{
					if(min_num>0)
					{
						cout<<"min num is "<<min_num<<endl;
						min_num=min_num-1;

						ans=ans+1;
					}
					else
					{
						flag=1;
						break;
					}
					if(flag==1)
						break;
				}

			}
			cout<<ans<<endl;

		}
	}

}