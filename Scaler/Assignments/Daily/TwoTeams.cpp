#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int y)
{
	int mod=1e9+7;
    long long int res=1;
    while(y>0){
    	// cout<<"res is "<<res<<endl;
    	if(y%2!=0)
    	{
    		res=(res%mod*x%mod)%mod;
    		y=y-1;
    	}
    	
    	x=(x%mod*x%mod)%mod;
    	// cout<<"X is "<<x<<endl;
    	y=y/2;
    }
    // res=res*x;?
    return res;
}
int main()
{
	int n;
	cin>>n;
	 int mod=1e9+7;
	long long int ans=power(2,n-1);
	// cout<<ans<<endl;
	ans=ans-1;
    ans=ans%(mod);	
    cout<<ans<<endl;
}