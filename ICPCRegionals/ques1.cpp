#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;


int finalcost=INT_MAX;
void calculate(int cost,vector<int> &top,int j,int expectedcost)
{
	// cout<<"called"<<endl;
	// cout<<"j "<<j<<endl;
	// cout<<cost<<endl;
	if(j>top.size()) return;

	if(cost>expectedcost)
	{
		if(abs(expectedcost-cost)<=abs(expectedcost-finalcost))
			{
				if(abs(expectedcost-cost)==abs(expectedcost-finalcost))
				{
					if(expectedcost>=finalcost)
					{
						finalcost=cost;
					}
				}
				else
				{
					finalcost = cost;
				}
			}
		return;	
	}

	for(int i=j;i<top.size();i++)
	{

		calculate(cost,top,i+1,expectedcost);
		for(int k=0;k<3;k++)
		{
			cost=cost+top[i];
			if(abs(expectedcost-cost)<=abs(expectedcost-finalcost))
			{
				if(abs(expectedcost-cost)==abs(expectedcost-finalcost))
				{
					if(expectedcost>=finalcost)
					{
						finalcost=cost;
					}
				}
				else
				{
					finalcost = cost;
				}
			}
			calculate(cost,top,i+1,expectedcost);
		}
	}
}






int main()
{

	//Input
	int n;
	cin>>n;
	vector<int> crust(n);
	for(int i=0;i<n;i++)
	{
		cin>>crust[i];
	} 
	int t;
	cin>>t;
	vector<int> top(t);
	for(int i=0;i<t;i++)
	{
		 cin>>top[i];
	}
	int expectedcost;
	cin>>expectedcost;

	sort(top.begin(),top.end());
	sort(crust.begin(),crust.end());


	//main code
	for(int i=0;i<n;i++)
	{
		if(crust[i]<=expectedcost)
		{
			if(expectedcost==crust[i])
			{
				finalcost=crust[i];
				break;
			}
			else
			{
				calculate(crust[i],top,0,expectedcost);
			}
		}
		else
		{
			break;
		}
	}
	cout<<"Ans: "<<finalcost<<endl;
}