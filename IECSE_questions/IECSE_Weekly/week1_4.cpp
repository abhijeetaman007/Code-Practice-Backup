// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//using Kadanes type approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	int d=0,curr_max=0,max=0;
	if(v.size()>1)
	{
			for(int i=0;i<v.size()-1;i++)
			{
				d=v[i+1]-v[i];
				// cout<<"d is "<<d<<endl;
				if(curr_max+d>=0)
				{
					curr_max=curr_max+d;
					// cout<<"curr_max is updated "<<curr_max<<endl;
				}
				else
				{
					curr_max=0;
				}
				if(curr_max>max)
				{
					max=curr_max;
					// cout<<"max is updated "<<max<<endl;
				}
			}
		cout<<max<<endl;	
	}
}