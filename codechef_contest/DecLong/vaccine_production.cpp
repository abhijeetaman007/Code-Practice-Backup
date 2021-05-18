#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int,int> p1,p2;
	int p;
	cin>>p1.first>>p1.second>>p2.first>>p2.second;
	cin>>p;
	int a=0;
	int c=min(p1.first,p2.first)-1;
	while(a<p)
	{	
		c++;
		if(c>=max(p1.first,p2.first))
		{
			a=a+p1.second+p2.second;
		}
		else
		{
			int x=min(p1.first,p2.first);
			if(x==p1.first)
				a=a+p1.second;
			else
				a=a+p2.second;
		}
	}
	cout<<c<<endl;
}