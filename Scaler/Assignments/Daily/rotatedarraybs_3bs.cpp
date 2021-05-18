#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	// int key;
	// cin>>key;
	int start=0;
	int end=n-1;
	int ans=-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(v[mid]>v[n-1])
		{
			start=mid+1;
		}
		else
		{
			ans=mid;
			end=mid-1;
		}
	}
	cout<<"Pivot is "<<ans<<endl;
	int key;
	cin>>key;
	int low=0;
	int high=ans-1;
	while(low<=high)
	{
		int mid=(high+low)/2;
		if(v[mid]==key)
		{
			cout<<"Ans is "<<mid<<endl;
			return 0;
		}
		else
		{
			if(v[mid]>key)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	low=ans;
	high=n-1;
	while(low<=high)
	{
		int mid=(high+low)/2;
		if(v[mid]==key)
		{
			cout<<"Ans is "<<mid<<endl;
			return 0;
		}
		else
		{
			if(v[mid]>key)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	cout<<"Ans is "<<-1<<endl;
	return 0;

}