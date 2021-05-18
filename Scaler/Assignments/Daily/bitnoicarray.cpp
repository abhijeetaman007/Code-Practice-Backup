#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int low=0;
	int high=n-1;
	int peak;
	int key;
	cin>>key;
	while(low<=high)
	{
		int m=(low+high)/2;
		if(v[m]>v[m+1] && v[m]>v[m-1])
		{
			peak=m;
			break;
		}
		else
		{
			if(v[m+1]>v[m])
				low=m+1;
			else
				high=m-1;
		}	
	}
	if(v[peak]<key)
	{
		cout<<-1<<endl;
		return 0;
	}
	else
	{
		low=0;
		high=peak;
		while(low<=high)
		{
			int m=(low+high)/2;
			if(v[m]==key)
			{
				cout<<m<<endl;
				return 0;
			}
			else
			{
				if(v[m]<key)
					low=m+1;
				else
					high=m-1;
			}
		}
		low=peak;
		high=n-1;
		while(low<=high)
		{
			int m=(low+high)/2;
			if(v[m]==key)
			{
				cout<<m<<endl;
				return 0;
			}
			else
			{
				if(v[m]<key)
					high=m-1;
				else
					low=m+1;
			}
		}
	}
	cout<<-1<<endl;
	return 0;
}