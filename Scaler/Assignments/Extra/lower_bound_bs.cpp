#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int key;
	cin>>key;
	int low=0;
	int high=n-1;
	int mid;
	int ans;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(key==v[mid])
		{
			ans=mid;
			break;
		}
		else
		{
			if(key>v[mid])
			{
				ans=mid;
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}
	}
	if(ans>key)
	{
		cout<<"no lower bound "<<endl;
	}
	else
	cout<<"lower bound is at "<<ans<<" and is "<<v[ans]<<endl;
}