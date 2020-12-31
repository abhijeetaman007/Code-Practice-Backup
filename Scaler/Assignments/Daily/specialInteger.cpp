#include<bits/stdc++.h>
using namespace std;

bool isValid(int x,vector<int> &v,int k)
{
		cout<<"inside isValid"<<endl;

	long long int sum=0;

	for(int i=0;i<x;i++)
		sum=sum+v[i];
	int i=0;
	int j=x-1;
	if(sum>k)
		return false;
	cout<<"case is "<<x<<endl;
	cout<<"init sum is "<<sum<<endl;
	while(j+1<v.size())
	{

		cout<<"v[i] is "<<v[i]<<" v[j] is "<<v[j]<<endl;
		sum=sum-v[i];
		i++;
		j++;
		sum=sum+v[j];
		cout<<sum<<" "<<endl;
		if(sum>k)
			return false;
		else
			continue;
	}
	return true;
}



int main()
{
	    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
		cout<<"ins"<<endl;
	int ans=0;
	int low=1;
	int high=n;
	while(low<=high)
	{
		cout<<"ins"<<endl;
		int mid=low+(high-low)/2;
		if(isValid(mid,v,k)){
			ans=mid;
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	cout<<"Ans is "<<ans<<endl;
}