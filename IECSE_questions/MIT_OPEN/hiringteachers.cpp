#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
	return a.second-a.first>b.second-b.first;
}
int main()
{
	int t,n,red=0;
	cin>>n>>t;
	vector<bool> flag(n,false);
	vector<pair<int,int> >v(t);
	for(int i=0;i<t;i++)
	{
		cin>>v[i].first;
		cin>>v[i].second;
	}
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<t;i++)
	{
		int f=0;
		for(int j=v[i].first-1;j<=v[i].second-1;j++)
		{
			if(flag[j]==false)
			{
				f=1;
				flag[j]=true;
			}
		}	
			if(f==0)
			{
				red++;
				// if(red>=2)
				// {
					// cout<<n<<endl;
					// return 0;
					// break;
				// }
			}	
	}
	// cout<<"red is "<<red<<endl;
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(flag[i]==false){
			c=c+1;
			// cout<<"i is false"<<i<<endl;
		}
	}
	if(red>=2)
	{
		// cout<<"inside"<<endl;
		cout<<n-c<<endl;
	}
	else
	{
		// if(red==1)
		// {
		// 	cout<<n-c-1<<endl;
		// }
		// else
		// {

		// }
		if(red==1)
		{
			 cout<<n-c-(v[t-1].second-v[t-1].first+1)<<endl;
		}
		else
		{
			 cout<<n-c-(v[t-1].second-v[t-1].first+1)-(v[t-2].second-v[t-2].first+1)<<endl;		
		}

	}

}