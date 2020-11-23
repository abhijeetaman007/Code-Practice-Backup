#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int main()
{
	int x;//base
	int y;//power
	// int m=;//taking modulus for avoiding overflow
	int ans=1;
	cin>>x>>y;
	while(y>0)
	{
		if(y&1)//Checking for odd power
		{
			ans=((ans%m)*(x%m))%m;
			y=y-1;
		}
		else
		{
			x=(x%m*x%m)%m;
			y=y>>1;//dividing power by 2
		}
	}
	cout<<"Ans is "<<ans;
}