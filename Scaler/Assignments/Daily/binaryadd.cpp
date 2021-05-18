#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int y)
{
	long long int res=1;
	while(y>0)
	{
		if(y&1){
			y=y-1;
			res=res*x;
		}
			x=x*x;
			y=y/2;
	}
	return res;
}


long long int bindec(string s)
{
	long long int x=0,y;
	long long int n=s.size();
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]=='1'){
			y=power(2,(n-1-i));
			x=x+y;
		}
	}
	return x;
}
string decbin(long long int x)
{
	string s;
	while(x!=1)
	{
		if(x%2==0)
		{
			s.push_back('0');
		}
		else
		{
			s.push_back('1');
		}
		// cout<<"x is "<<x<<endl;
		x=x/2;
		// cout<<"s is "<<s<<endl;
	}
	if(x%2==1)
	s.push_back('1');
	reverse(s.begin(),s.end());
	return s;
}

int main()
{
	string a,b,ans;
	cin>>a>>b;
	long long int x,y,z;
	x=bindec(a);
	y=bindec(b);
	z=x+y;
	ans=decbin(z);
	cout<<ans<<endl;
}