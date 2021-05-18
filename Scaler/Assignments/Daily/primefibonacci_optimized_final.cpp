#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
	int pastprev=1;
	int prev=1;
	int present;
	int count=28;  //count till pisano period which for fib%10 is 60 so 28 is count of prime occuring at last digit till 60
	int c1=0,c2=0,d=0;
	for(int i=3;i<=(b%60);i++)   //Pisano period is 60 mod 10 //finding count till b
	{	
		present=prev%10+pastprev%10;
		d=present%10;
		if(d==2||d==3||d==5||d==7)
		{
			c2+=1;
		}
		pastprev=prev;
		prev=present;
	}
	pastprev=1;
	prev=1;
	present=0;
	for(int i=3;i<=((a-1)%60);i++)//finding count till a-1
	{	
		present=prev%10+pastprev%10;
		d=present%10;
		if(d==2||d==3||d==5||d==7)
		{
			c1+=1;
		}
		pastprev=prev;
		prev=present;
	}
	c1=c1+((a-1)/60)*count;
	c2=c2+(b/60)*count;
	int ans=c2-c1;				//finding final count
	return ans;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<solve(a,b);
}