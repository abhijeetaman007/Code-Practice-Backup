#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int d=0,c=0,c1=0;
	 int prev=1,pastprev=1,present=0;
	for(int i=3;i<=b;i++)
	{
	    
		present=prev%10+pastprev%10;
		d=present%10;
		if(d==2|| d==3||d==5||d==7)
		{
			c+=1;
			if(i<a)
				c1+=1;
		}
		pastprev=prev;
		prev=present;
	}
	int ans=c-c1;
	cout<<"Ans is"<<ans<<endl;
}