#include<bits/stdc++.h>
using namespace std;
struct data
		{
			int index;
			int cost;
			int time;
		};
bool compare(struct data a,struct data b)
{
	return ((double)a.time/(double)a.cost)>((double)b.time/(double)b.cost);
}
bool comp (struct data a,struct data b)
{
	return a.cost>b.cost;
}


int main()
{
	int n;
	cin>>n;
	
	vector<struct data>v(n);
	vector<struct data>v1(n);
	vector<int> flag(n,0);
	for(int i=0;i<n;i++)
	{
		int t,c;
		cin>>t>>c;
		v[i].index=i;
		v[i].time=t;
		v[i].cost=c;
	}
	v1=v;
	sort(v.begin(),v.end(),compare);
	sort(v1.begin(),v1.end(),comp);
	long long int ans=0;
	int j=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(count==n)
			break;
		if(flag[v[i].index]==0){
			ans=ans+v[i].cost;
			flag[v[i].index]=1;
			int j=0;
			int x=v[i].time;
			count=count+1;
			int k=0;
			while(j<x && count<=n && k<n)
			{
				if(flag[v1[k].index]==0)
				{
					flag[v1[k].index]==1;
					j++;	
					count++;
				}
				k++;
			}	
		}
		
	}
	cout<<"Ans is "<<ans<<endl;

}