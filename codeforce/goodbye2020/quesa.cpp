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
		set<float> s;
		vector<float> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(int i=1;i<n;i++)
		{
			float x=0.5*v[i];
			for(int j=0;j<i;j++)
			{
				s.insert(x-0.5*v[j]);
			}
		}
		int ans=s.size();
		cout<<ans<<endl;
	}
}