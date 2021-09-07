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
		vector<double> v(2*n);
		for(int i=0;i<2*n;i++)
		{
			cin>>v[i];			
		}
		sort(v.begin(),v.end());
		string ans="PERFECT";
		double k=(v[0]+v[2*n-1])/2;
		for(int i=0;i<n;i++)
		{
			double x=(v[i]+v[2*n-1-i])/2;
			if(x!=k)
			{
				ans="IMBALANCED";
				break;
			}
		}
		cout<<ans<<endl;
	}
}