// https://cses.fi/problemset/task/1619/
#include<bits/stdc++.h>
using namespace std;
bool compareInterval(int a, int b) 
{ 
    return (abs(a)<abs(b)); 
} 
int main()
{
	int n,c=0,max=0;
	cin>>n;
	// vector< pair<int,int> > v(n);
	// for(int i=0;i<2*n;i++)
	// {
	// 	if(i%2)
	// 	{
	// 		cin>>v[i].first;
	// 		v[i].second=0;//Arrival
	// 	}
	// 	else
	// 	{
	// 		cin>>v[i].first;
	// 		v[i].second=1;	//Departure
	// 	}
	// }
	// sort(v.begin(),v.end());
	// for(int i=0;i<2*n;i++)
	// {
	// 	c=c+v[i].first;

	// }
	vector<int> v(2*n);
	for(int i=0;i<2*n;i++)
	{
		if(i%2==0)
		{
			cin>>v[i];
		}
		else
		{
			int x;
			cin>>x;
			x=x*(-1);
			v[i]=x;
		}
	}
	sort(v.begin(),v.end(),compareInterval);
	for(int i=0;i<2*n;i++)
	{
		if(v[i]>0)
		c=c+1;
		else
			c=c-1;
		if(max<c)
		{
			max=c;
		}
	}
	cout<<max;
}