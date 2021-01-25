#include<bits/stdc++.h>
using namespace std;
int perfect(int n,int x,int sum)
{
	if(x>=n)
	{
		if(sum==n)
			return 1;
		else
			return 0;
	}
	if(n%x==0)
		sum=sum+x;
	return perfect(n,x+1,sum);
}
int main()
{
	int n;
	cin>>n;
	int flag=perfect(n,1,0);
	if(flag==1)
		printf("Yes perfect Number");
	else
		printf("No not perfect Number");
}