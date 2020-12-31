#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int,int>p1,p2,P1,P2;
	cin>>p1.first>>p2.first;
	cin>>p1.second>>p2.second;
	int x;
	cin>>x;
	if(p2.second<p1.second)
	{
		swap(p1,p2);
	}
	int mx=0;
	int c=0;
	int d=0;
	while(c<p1.first && x>=d+p1.second)
	{
		mx++;
		d=d+p1.second;
		c++;
	}
	c=0;
	while(c<p2.first && x>=d+p2.second)
	{
		mx++;
		d=d+p2.second;
		c++;
	}
	c=0;
	int min=0;
	d=0;
	if((p2.second-1)*(p2.first)+(p1.second-1)*(p1.first)<x)
	{
			min=x-((p2.second-1)*(p2.first)+(p1.second-1)*(p1.first));	
	}
	cout<<min<<" "<<mx<<endl;

}