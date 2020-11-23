#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int ans;
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int m=(low+high)/2;
		cout<<"inisde"<<endl;
		cout<<v[m]<<endl;
		if(m+1>=n)
		{
			if(v[m-1]<=v[m])
				{
					ans=v[m];
					break;
				}

		}
		else if(m-1<0)
		{
			if(v[m+1]<=v[m])
				{
					ans=v[m];
					break;
				}			
		}
		else if(v[m+1]<=v[m] && v[m-1]<=v[m])
		{
			ans=v[m];
			break;
		}
		else
		{
			cout<<"else"<<endl;
			if(v[m+1]>v[m])
			{
				low=m+1;
			}
			else
			{
				if(v[m-1]>v[m])
				{
					high=m-1;
				}
			}
		}
	}
	cout<<"Ans is "<<ans<<endl;
}