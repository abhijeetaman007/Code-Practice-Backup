#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=8;
	int c=0;
	for(int i=0;i<n;i++)
	{
		int j=i;
		cout<<"i is "<<i<<endl;
		while(j)
		{
			cout<<"inside loop "<<j<<endl;
			j=j&(j-1);
			c=c+1;
		}
	}
	cout<<c<<endl;
}