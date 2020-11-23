#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,l=0,r,ans,mid;
	cin>>n;
	r=n;
	mid=(l+r)/2;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(mid*mid==n)
		{
			ans=mid;
			break;
		}
		if(mid*mid>n)
		{
			r=mid-1;
		}
		if(mid*mid<n)
		{
			l=mid+1;
		}
	}
	cout<<"Square root is "<<mid<<endl;
}
