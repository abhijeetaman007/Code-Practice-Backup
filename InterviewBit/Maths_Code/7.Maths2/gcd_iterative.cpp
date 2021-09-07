#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a%b==0)
		cout<<b<<endl;
	else
	{
		while(b!=0)
		{
			int t=b;
			b=a%b;
			a=t;
		}
		cout<<a<<endl;
	}
}