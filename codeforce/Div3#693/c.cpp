#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
		int ans=0,max_ans=0;
		for(int i=0;i<n;i++)
		{
			ans=v[i];
			int j=i+v[i];
			while(j<n)
			{
				ans=ans+v[j];
				if(v[j]==0)
					break;
				j=j+v[j];
			}
			if(ans>max_ans)
				max_ans=ans;
		}
		cout<<max_ans<<endl;
	}
}