#include<bits/stdc++.h>
using namespace std;
void printn(int n,int c)
{
	if(n==0)
		return;
	cout<<c<<" ";
	printn(n-1,c+1);
}


int main()
{
	int n;
	cin>>n;
	printn(n,1);
}