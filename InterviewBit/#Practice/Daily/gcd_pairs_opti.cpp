#include<bits/stdc++.h>
using namespace std;
int main()
{
	int mod=1e9+7;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int key;
	cin>>key;
	int mx=*max_element(v.begin(),v.end());
	vector<int> a(mx+1),b(mx+1);
	for(int i=0;i<n;i++)
		a[v[i]]++;
	int ans=0;
	for(int i=mx;i>key;i--)
	{
		int x=a[i];
		int j=2*i;
		cout<<j<<endl;
		int y=0,z=0;
		while(j<=mx)
		{
			cout<<" j is "<<j<<endl;
			y=y+b[j];//sub
			x=x+a[j];//freq
			j=j+i;
		}
		cout<<"x is "<<x<<endl;
		z=(x*(x-1))/2;
		z=z%mod;
		b[i]=z-y;
		cout<<"i is "<<i<<" b[i]"<<b[i]<<endl;
		b[i]=(b[i]+mod)%mod;
		ans=ans+b[i];
	}
	cout<<"Final ans is "<<ans<<endl;
}