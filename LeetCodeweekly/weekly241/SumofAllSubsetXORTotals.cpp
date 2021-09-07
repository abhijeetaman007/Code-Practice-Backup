#include<bits/stdc++.h>
using namespace std;
void findsubset(int i,int n,vector<int> &v,vector<long long int>&temp,long long int &ans)
{
	// cout<<"fun"<<endl;
	// cout<<i<<" index "<<endl;
	if(i==n)
	{
		int a=0;
		for(int j=0;j<temp.size();j++)
		{
			// cout<<temp[j]<<" ";

			a=a^temp[j];
		}
		ans=ans+a;
		// cout<<"Ans is "<<ans<<endl;
		return;
	}
	temp.push_back(v[i]);
	findsubset(i+1,n,v,temp,ans);
	temp.pop_back();
	findsubset(i+1,n,v,temp,ans);
	return ;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		vector<long long int> temp;
		long long int ans=0;
		findsubset(0,n,v,temp,ans);	
		cout<<"Ans is "<<ans<<endl;
	}
}