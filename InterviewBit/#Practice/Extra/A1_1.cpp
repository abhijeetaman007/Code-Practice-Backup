#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l=1;
	int n;
	cin>>n;
	int r=n;
	int mid;
	int count=0;
	while(mid*mid!=n)
	{
		mid=(l+r)/2;
		count+=1;
		if(mid*mid<n)
		{
			l=mid+1;
		}
		if(mid*mid>n)
		{	
			r=mid-1;
		}	
	}
	cout<<mid<<endl;
	cout<<count<<endl;
}