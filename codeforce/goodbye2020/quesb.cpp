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
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		unordered_set<int> s;
		s.insert(v[0]);
		for(int i=1;i<n;i++)
		{
			if(v[i-1]==v[i])
			{
				if(i+1>=n)
				{
					v[i]++;
				}
				else
				{
					if(v[i]!=v[i+1])
						v[i]++;
				}
			}
			s.insert(v[i]);
		}
		int ans=s.size();
		cout<<ans<<endl;
	}
}