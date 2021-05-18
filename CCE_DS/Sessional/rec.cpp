#include<bits/stdc++.h>
using namespace std;
int c=0;
int flag=1;
void genpal(int n,int x)
{
	c=c+1;
	if(c==x)
		return;
	cout<<n;
	if(n==1)
	{
		cout<<n;
		flag=0;
	}
	if(flag==0)
		genpal(n+1,x);
	else
		genpal(n-1,x);
}
int main()
{
	int n;
	cout<<"Enter Number"<<endl;
	cin>>n;
	genpal(n,n*2);
}