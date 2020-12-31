#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("input1.txt", "w", stdout);
	// #endif
	int mx=100;
	int c=0;
	for(int i=1;i<=mx;i++)
	{
		for(int j=1;j<=mx;j++)
		{
			for(int k=1;k<=mx;k++)
			{
				// cout<<i<<" "<<j<<" "<<k<<endl;
				c++;
				if(c==90916)
				{
				cout<<i<<" "<<j<<" "<<k<<endl;					
				}

			}
		}
	}
}