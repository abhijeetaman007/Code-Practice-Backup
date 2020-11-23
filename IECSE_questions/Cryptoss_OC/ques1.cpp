#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	if(n<3)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		sort(v.begin(),v.end(),greater<int>());
		// cout<<"TEST"<<endl;
		// int t;
		// cin>>t;
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					// cout<<"k is "<<k<<" "<<n<<endl;
					long long int a=0 ,b=0,c=0;
					// cout<<"loop"<<endl;
					// cin>>t;
					a=v[i];
					b=v[j];
					c=v[k];
					if(a+b>c && b+c>a && a+c>b)
					{
						cout<<"YES"<<endl;
						cout<<a<<" "<<b<<" "<<c<<endl;
						return 0;
					}
				}
			}
		}
		cout<<"NO"<<endl;
		return 0;
	}
	
}