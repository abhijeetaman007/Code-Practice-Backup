#include<bits/stdc++.h>
using namespace std;
int solve(int n,int ans)
{
	// cout<<n<<endl;
	if(n==0)
		return ans;
	ans=ans+(n%10);
	n=n/10;
	return solve(n,ans);
}

int main()
{
	int x=123;
	cout<<solve(x,0);
}