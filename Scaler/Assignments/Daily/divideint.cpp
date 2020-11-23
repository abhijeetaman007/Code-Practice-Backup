#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	long long int c=0 ;
	while(a>b)
	{
		a=a-b;
		c=c+1;
	}
	if(c>INT_MAX)
		cout<<INT_MAX<<endl;
	else
		cout<<c<<endl;
}