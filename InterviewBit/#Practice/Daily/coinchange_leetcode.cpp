#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int t;
	cin>>t;
	vector<int> dp(t+1,-1);
	dp[0]=0;
	for(int i=1;i<=t;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i-v[j]>=0 && i-v[j]!=-1)
			{
				if(dp[i]!=-1)
					dp[i]=min(dp[i],dp[i-v[j]]);
				else
					dp[i]=dp[i-v[j]];
			}
		}
		if(dp[i]!=-1)
		dp[i]+=1;
	}
	for(auto x:dp)
		cout<<x<<" ";
	cout<<"Ans is "<<dp[t]<<endl;
}


nt coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int dp[10005]={-1};
        dp[0]=0;
        if(amount==0) return dp[0];
        for(auto x:coins){
            if(x==1){
                dp[1]=1;
                break;
            }
        }
        if(amount==1) return dp[1];
        for(int i=2;i<=amount;i++){
            int ans=INT_MAX;
            //ans has min number of coins reqd
            for(int x=0;x<n;x++){
                if(i-coins[x]>=0){
                    ans=min(ans,dp[i-coins[x]]+1);
                    dp[i]=ans;
                    // cout<<i<<" "<<dp[i-coins[x]]+1<<endl;
                }    
            }
        }
        for(int i=0;i<=amount;i++) cout<<dp[i]<<" ";
        return dp[amount];
    }
    