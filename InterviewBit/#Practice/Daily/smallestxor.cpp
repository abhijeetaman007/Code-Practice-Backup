#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int c=1<<30;
	cout<<"c is "<<c<<endl;
	int d,count=0;
	for(int i=32;i>=1;i--)
	{
		if(count==b)
		{
			d=i;
			break;
		}
		else
		{
			if((a&c)>0){
				count=count+1;
				cout<<count<<endl;
			}
		}
		c=c>>1;
	}
	// int t=b;
	cout<<"count is "<<count<<endl;
	if(count!=b)
	{
		d=1;
		// cout<<"final "<<((1<<b)-1)<<endl;
		while(count!=b)
		{
			cout<<"inside"<<endl;
			if((a&d)>0)
			{
				cout<<"if"<<endl;
				d=d<<1;
			}
			else
			{
				cout<<"else"<<endl;
				a=a|d;
				d=d<<1;
				count=count+1;
				cout<<"count is "<<count<<endl;

			}
		}
		cout<<"final is "<<a<<endl;
		return 0;
	}
	a=a>>(d-1);
	cout<<"a is "<<a<<endl;
	a=a<<(d-1);
	cout<<"Ans is "<<a<<endl;
}