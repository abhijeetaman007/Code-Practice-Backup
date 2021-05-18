#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int sum=0;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			sum+=v[i];
		}
		if(n==1){
			cout<<"NO"<<endl;
			continue;
		}
		if(sum%2!=0){
			cout<<"NO"<<endl;
			continue;
		}
		long long int a=0,b=0;
		sort(v.begin(),v.end(),greater<int>());
		for(int i=0;i<n;i++)
		{
			if(a<=b)
			{
				a=a+v[i];
			}
			else
			{
				b=b+v[i];
			}
		}
		if(a==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}