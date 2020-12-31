#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c=0;
	int n=8;
	for(int i=n,j=1;i>0;i/=2)
	{
		cout<<"for"<<endl;
		cout<<"i is "<<i<<" j is "<<j<<endl;
		while(j<i)
		{
			cout<<"while"<<endl;
			cout<<"i is "<<i<<" j is "<<j<<endl;
			c++;
			j=j*2;
		}
	}
	cout<<c<<endl;
}