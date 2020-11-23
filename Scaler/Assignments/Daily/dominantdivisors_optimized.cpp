// #include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int ans,s1=0,s2=0;
	int k=a-1;

	while(k>=1)
	{
		int x=k/2;
		if(k&1)
		x=x+1; 
		s1=s1+x*x;
		k=k/2;
	}
	// s1=s1+1;
	k=b;
	while(k>=1)
	{
		int x=k/2;
		if(k&1)
		x=x+1; 
		s2=s2+x*x;
		k=k/2;
	}
	// s2=s2+1;
	ans=s2-s1;
	if(a==1)
		ans++;
	cout<<"Ans is "<<ans<<endl;

}