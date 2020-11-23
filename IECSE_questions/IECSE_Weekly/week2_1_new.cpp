// https://cses.fi/problemset/task/1619/
#include<bits/stdc++.h>
using namespace std;
struct time{
		int a;
		int type;
	};
bool compareInterval(struct time a1, struct time a2) 
{ 
    return (a1.a<a2.a); 
} 
int main()
{
	int n,c=0,max=0;
	cin>>n;
	
	vector<struct time> v(2*n);
	for(int i=0;i<2*n;i++)
	{
		if(i%2==0)
		{
			cin>>v[i].a;
			v[i].type=0;//arrival
		}
		else
		{
			cin>>v[i].a;
			v[i].type=1;//departure	
		}
	}
	sort(v.begin(),v.end(),compareInterval);
	for(int i=0;i<2*n;i++)
	{
		if(v[i].type==0)
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