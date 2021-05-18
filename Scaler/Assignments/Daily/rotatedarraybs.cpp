#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	while(1){
	int key;
	cin>>key;
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(key==v[mid])
		{
			ans=mid;
			break;
		}
		else
		{
			if(key>v[mid])
			{
				if((key<=v[n-1] && v[mid]<=v[n-1] ) || (key>v[n-1]&&v[mid]>v[n-1]))
				{
					low=mid+1;
				}
				else
				{
					high=mid-1;
				}
			}
			else
			{
				if((key<=v[n-1] && v[mid]<=v[n-1] ) || (key>v[n-1]&&v[mid]>v[n-1]))
					high=mid-1;
				else
					low=mid+1;
			}
		}
	}
	cout<<"Ans is "<<ans<<endl;
}
}