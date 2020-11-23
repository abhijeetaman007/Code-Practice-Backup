#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,d;
	cin>>d>>m;
	vector<int> v(d);
	for(int i=0;i<d;i++)
	{	
		cin>>v[i];
	}
	long long int ans=0;
	for(int i=0;i<d;i++)
	{
		// cout<<ans<<endl;
		// cout<<"test"<<(v[i]/m)<<endl;
		ans=ans+(v[i]/m);
		// cout<<ans<<"f"<<endl;
		// cout<<ans<<endl;
		if(i==(d-1))
		{
			// cout<<"inside"<<endl;
			if(v[i]%m!=0)
				ans=ans+1;
			// cout<<ans<<"s"<<endl;
		}
		else
		{
			if(v[i]%m!=0){
				if((v[i+1]%m)>=(v[i]%m)&&((v[i+1]+v[i]%m)>=m))
					v[i+1]+=v[i]%m;
				else
					ans=ans+1;
			}
		}
	}
	cout<<ans<<endl;
}