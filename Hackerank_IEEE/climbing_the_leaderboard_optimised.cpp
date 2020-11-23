//https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	vector<long long int> v1,v2,v;
	cin>>n;
	long long int a;
	for(long long int i=0;i<n;i++)
	{
		cin>>a;
		if(!v1.empty())
		{
			if(v1.back()==a)
			{
				//cout<<a<<" is ignored"<<endl;
				continue;
			}
			else
			v1.push_back(a);
		}
		else
		v1.push_back(a);
	}
	cin>>m;
	for(long long int i=0;i<m;i++)
	{
		cin>>a;
		v2.push_back(a);
	}
	int temp=0;
	for(long long int i=m-1;i>=0;i--)
	{
		//v=v1;
		//v.push_back(v2[i]);
		//sort(v.begin(),v.end(),greater<int>());
		//unique(v.begin(),v.end());
		//cout<<endl;
		// for(auto x:v)
		// 	cout<<x<<" ";
		// cout<<endl;
		//cout<<endl;
		// sort(v.begin(),v.end(),greater<int>());
		// for(auto x:v)
		// 	cout<<x<<" ";
		// cout<<endl;
		for(long long int j=temp;v1.size();j++)
		{
			//cout<<" v2[] is "<<v2[i]<<" v1[] is "<<v1[j]<<endl;
			if(v2[i]>=v1[j])
				{
					//cout<<(j+1)<<endl;
					v.push_back(j+1);
					temp=j+1;
					break;
				}
		}
	}
	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i]<<endl;

}