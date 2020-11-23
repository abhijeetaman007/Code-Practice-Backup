#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int M=1000000007;
	long long int a,b;
	cin>>a>>b;
	long long int c=0;
	for(long long int i=a;i<=b;i++)
	{
		long long int t=i;
		if(t&1)
			c=(c%M+t%M)%M;
		else
		{
			while((t&1)==0)
				t=t>>1;
			c=(c%M+t%M)%M;
		}
	}
	cout<<"Ans is "<<c<<endl;
}