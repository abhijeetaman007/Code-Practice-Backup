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
		vector<vector<int> >v(n,vector<int>(2));
		for(int i=0;i<n;i++)
		{
			cin>>v[i][0];
			cin>>v[i][1];
		}
		sort(v.begin(),v.end());
		int minyr=v[0][0];
		int maxpop=1;
		for(int i=1;i<n;i++)
		{
			int pop=1;
			for(int j=i-1;j>=0;j--)
			{
				if(v[j][1]>v[i][0])
				{
					pop++;
				}
				if(pop>maxpop)
				{
					maxpop=pop;
					minyr=v[i][0];
				}
			}
		}
		cout<<"max pop "<<maxpop<<" yr "<<minyr<<endl;
	}
}