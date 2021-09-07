#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int c=0,n=30;
	for(int i=3;i<n/3;i+=3)
	{

		cout<<"first for "<<endl;
		cout<<"i is "<<i<<endl;
		
		for(int j=2;j<n/2;j+=2)
		{
			cout<<"second for "<<endl;
			cout<<"i is "<<i<<" j is "<<j<<endl;
			c++;
		}
	}
	cout<<c<<endl;
}