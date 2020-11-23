#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int start=-1;
	int end=-1;
	int l=0;
	int r=n-1;
	int k;
	cin>>k;
	int flag=0;
	int m;
	while(l<=r)
	{
		m=(l+r)/2;
		if(v[m]==k)
		{
			flag=1;
			break;
		}
		else
		{
			if(k>v[m])
			{
				l=m+1;
			}
			else
			{
				r=m-1;
			}
		}
	}
	if(flag==0)
	{
		cout<<start<<" "<<end<<endl;
		return 0;
	}
	else
	{
		int left=0;
		int right=m;
		while(left<=right)
		{
			int mid=(left+right)/2;
			if(k==v[mid])
			{
				if(mid-1>=0 && v[mid-1]==v[mid])
				{
					right=mid-1;
				}
				else
				{
					start=mid;
					break;
				}
			}
			else
			{
				if(k>v[mid])
				{
					left=mid+1;
				}
				else
				{
					right=mid-1;
				}
			}

		}
		left=m;
		right=n-1;
		while(left<=right)
		{
		
		int mid=(left+right)/2;
			if(k==v[mid])
			{
				if(mid+1<n && v[mid]==v[mid+1])
					left=mid+1;
				else
				{
					end=mid;
					break;
				}
			}
			else
			{
				if(k>v[mid])
					left=mid+1;
				else
					right=mid-1;
			}
		}
	cout<<start<<" "<<end<<endl;
	}
}