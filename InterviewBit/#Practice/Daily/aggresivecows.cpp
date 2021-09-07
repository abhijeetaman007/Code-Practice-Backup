#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &v,int m,int x)
{
	int last_index=0;
	int placed_cows=1;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]-v[last_index]>=x)
		{	
			last_index=i;
			placed_cows++;
		}
	}
	return placed_cows>=m?true:false;
}


int main()
{
	int n;
	int m;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cin>>m;
	sort(v.begin(),v.end());
	int low=1;
	int ans;
	int high=v[n-1]-v[0];
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(isValid(v,m,mid))
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