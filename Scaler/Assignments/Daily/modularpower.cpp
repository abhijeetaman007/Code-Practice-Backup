#include<bits/stdc++.h>
using namespace std;
int power(int x,int y)
{
	int mod=1e9+7;
	int res=1;
	while(y>0)
	{
		if(y&1){
			res=(res%mod*x%mod)%mod;
			y=y-1;
		}

		x=((x%mod)*(x%mod))%mod;
		y=y/2;
	}
	return res;
}
int main()
{
	cout<<power(10,10)<<endl;
}