#include<bits/stdc++.h>
using namespace std;
int bs_rec(vector<int> &v,int k,int s,int e)
{
	if(s<=e)
	{
		int m=s+(e-s)/2;
		if(v[m]==k)
			return m;
		else if(k>v[m])
			return bs_rec(v,k,m+1,e);
		else
			return bs_rec(v,k,s,m-1);			
	}
	return -1;

}


int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	cout<<"Element found at "<<bs_rec(v,k,0,n-1);

}