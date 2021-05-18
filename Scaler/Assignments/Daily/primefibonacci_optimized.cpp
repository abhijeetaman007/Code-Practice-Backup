#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int pastprev=1;
	int prev=1;
	int present;
	a=(a%60);
	b=(b%60);
	int c1=0,c2=0,d=0;
	int count=0;
	for(int i=3;i<=60;i++)
	{	
		present=prev%10+pastprev%10;
		d=present%10;
		if(d==2||d==3||d==5||d==7)
		{
			count+=1;
		}
		pastprev=prev;
		prev=present;
	}
	cout<<"Conunt is "<<count;
	 pastprev=1;
	 prev=1;
	 present;
	for(int i=2;i<=b;i++)
	{	
		present=prev%10+pastprev%10;
		d=present%10;
		if(d==2||d==3||d==5||d==7)
		{
			c2+=1;
			if(i<a)
				c1+=1;
		}
		pastprev=prev;
		prev=present;
	}
	int ans=c2-c1;
	cout<<"Ans is "<<ans<<endl;
}