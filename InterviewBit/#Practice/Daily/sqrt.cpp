#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int low=0;
	int mid;
	int high=n;
	int ans;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(mid*mid<=n)
		{
			ans=mid;
			low=mid+1;
		}
		else
		{	
			high=mid-1;
		}
	}
	cout<<ans<<endl;
}