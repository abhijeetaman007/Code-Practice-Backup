#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	int m=1e9+7;
	// cout<<"m is "<<m<<endl;
	cin>>a>>b>>c;
	long long int x=a*b,count=0,ans;
	for(long long int i=1;i<=x;i++)
	{
		if(i%b==0 || i%c==0)
		{

			count++;
			// cout<<i<<" "<<count<<endl;
			if(count ==a){
				ans=i;
				break;
			}
		}
	}
	cout<<ans%m<<endl;
}