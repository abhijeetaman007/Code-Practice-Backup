#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		long long int sum=0;
		cin>>n>>k;
		vector<int> v(n*k);
		for(int i=0;i<n*k;i++)
			cin>>v[i];
		float x=n/2.0;
		// cout<<"x is "<<x<<endl;
		int start=(ceil(x)-1)*k;
		// cout<<"n is "<<n<<endl;
		// cout<<"n/2 is "<<n/2<<endl;
		// cout<<ceil(x)<<endl;
		// cout<<"start is "<<start<<endl;
		int skip=n-(ceil(x)-1);
		// cout<<"skip is "<<skip<<endl;
		for(int i=start;i<n*k;i=i+skip)
		{
			// cout<<v[i]<<endl;
			sum=sum+v[i];
		}
		cout<<sum<<endl;

	}
}