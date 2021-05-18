#include<bits/stdc++.h>
using namespace std;
int main()
{
	    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		int r,b;
		cin>>r;
		vector<int> red(r);
		for(int i=0;i<r;i++)
		{
			cin>>red[i];
		}
		cin>>b;
		vector<int> blue(b);
		for(int i=0;i<b;i++)
		{
			cin>>blue[i];
		}
		int sum=0;
		int ans=0;
		// cout<<"done"<<endl;
		for(int i=0;i<r;i++)
		{
			// cout<<"inside"<<endl;
			sum=sum+red[i];
			if(sum>ans)
				ans=sum;
		}
		// cout<<ans<<endl;
		int sum1=0;
		int ans1=0;
		for(int i=0;i<b;i++)
		{
			sum1=sum1+blue[i];
			if(sum1>ans1)
				ans1=sum1;
		}
		// cout<<ans1<<endl;		
		ans=ans+ans1;
		cout<<ans<<endl;
	}
}