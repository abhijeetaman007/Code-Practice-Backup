#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int y)
{
	int mod=1e9+7;
	long long int res=1;
	while(y>0)
	{
		if(y&1){
			res=(res%mod*x%mod)%mod;
			y=y-1;
		}

		x=((x%mod)*(x%mod))%mod;
		y=y/2;
	}
	return res;
}
int main()
{
	string t,s;
	cin>>t>>s;
	long long int p=31;
	int mod=1e9+7;
	long long int HT=0,HP=0,c=0;
	for(int i=0;i<s.size();i++)
	{
		long long int x=power(p,i);
		HT=(HT+(t[i]*x))%mod;
		HP=(HP+(s[i]*x))%mod;
	}
	if(HT==HP)
	{
		// string temp="\0";
		// for(int i=0;i<s.size();i++)
		// {
		// 	temp=temp+t[i];
		// }
		// if(temp==s)
			c++;
	}
	for(int i=s.size();i<t.size();i++)
	{
		HT=((HT-t[i-s.size()]*power(p,i-s.size()))%mod+mod)%mod;
		HT=(HT+(long long int)t[i]*power(p,i))%mod;
		HP=(HP*p)%mod;
		// cout<<"HT is "<<HT<<" HP is "<<HP<<endl;
		if(HP==HT)
		{
			// string temp="\0";
			// for(int j=i-s.size()+1;j<=i;j++)
			// {
			// 	temp=temp+t[j];
			// }
			// if(temp==s){
				c++;
			// }	
		}
	}
	cout<<c<<endl;
}