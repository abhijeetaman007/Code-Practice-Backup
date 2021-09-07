#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
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
		sort(v.begin(),v.end());
		vector<int> ans(n,0);
		vector<int> lcm(n,0);
		lcm[0]=v[0];
		if(v[0]==1)
		{
		// 	int c=0;
		// 	int j=0;
		// 	for(int i=0;i<n;i++)
		// 	{
		// 		if(v[i]==1)
		// 		{
		// 			c++;
		// 			j++;
		// 		}
		// 		else
		// 			break;
		// 	}
		// }
		// if(j<s.size())
		// {
		// 	for(int i=2;i*i<=v[j];i++)
		// 	{	
		// 		if(v[j]%i==0)
		// 		{
		// 			ans[0]=c*i;
		// 			break;
		// 		}
		// 	}	
		}

		for(int i=1;i<n;i++)
		{
			lcm[i]=(lcm[i-1]*v[i])/(__gcd(lcm[i-1],v[i]));
			int k1=lcm[i]/lcm[i-1];
			int k2=lcm[i]/v[i];
			int a1,a2;
			if(k1==1) k1=0;
			if(k2==1) k2=0;
			a1=ans[i-1]+k1;
			a2=k2;

			// if(k1==1)
			// {
			// 	a1=ans[i-1];
			// }
			// else
			// {
			// 	a1=ans[i-1]+k1;
			// }
			// if(k2==1)
			// {
			// 	a2=0;
			// }
			// else
			// {
			// 	a2=k2;
			// }
			ans[i]=min(a1,a2);
		}
		int a=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]%2!=0) a++; 
		}
		cout<<ans[n-1]<<" "<<endl;
		cout<<min(ans[n-1],2*a)<<endl;
	}
}