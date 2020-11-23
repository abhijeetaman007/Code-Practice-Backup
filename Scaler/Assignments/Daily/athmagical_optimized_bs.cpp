#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	long long int x=a*b,ans;
	long long int low=0;
	long long int high=x;
	while(low<=high)
	{
		long long int m=low+(high-low)/2;
		long long int lcm=(c*b)/(__gcd(b,c));
		cout<<"m is "<<m<<endl;
		cout<<"lcm is "<<lcm<<endl;
		long long int n=(m/c)+(m/b)-(m/lcm);
		cout<<"n is "<<n<<endl;
		
			if(n>=a)
			{
				ans=m;
				high=m-1;
			}
			else
			{
				low=m+1;
			}

	}
	// long long int lcm=(c*b)/(__gcd(b,c));
	// long long int x=(lcm/b)+(lcm/c)-1;
	// long long int y=a*lcm;
	// long long int ans=y/x;
	// //if((ans)%b!=0 && (ans)%c!=0)
	// //	ans=ans+1;
	// cout<<"initial ans "<<ans<<endl;
	// x=ans/b;
	// y=ans/c;
	// // if(abs(ans-x*b)<=abs(ans-y*c))
	// // 	ans=x*b;
	// // else
	// // 	ans=y*c;
	long long int p=ans%b;
	long long int q=b-p;
	long long int r=ans%c;
	long long int s=c-r;
	long long int mi=min(p,min(q,(min(r,s))));
	
	if(mi==p)
		ans=ans-(ans%b);
	if(mi==q)
		ans=(ans)+(b-(ans%b));
	if(mi==r)
		ans=ans-(ans%c);
	if(mi==s)
		ans=ans+(c-(ans%c));
	cout<<ans<<endl;
}