//Based on Kadane's Algo 
//Paradigm - Dynamic Programming

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int curr_max=0,mx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(curr_max+v[i]<=0)
		{
			curr_max=0;
			if(mx<v[i])
			mx=v[i];
		}
		else
		{
			curr_max=curr_max+v[i];
			if(mx<curr_max)
				mx=curr_max;
		}

	}
	cout<<mx<<endl;		
}