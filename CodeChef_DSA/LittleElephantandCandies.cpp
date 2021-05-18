#include<bits/stdc++.h>
using namespace std;
int main()
{
	    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,c,a;
		cin>>n>>c;
		int arr[n];
		long long int sum=0,flag=0;
		for(long long int i=0;i<n;i++)
		{
			 cin>>arr[i];
			 sum+=arr[i];
		}
		if(sum>c)
			{
				cout<<"No"<<endl;
			}
		else
		cout<<"Yes"<<endl;
	}
}