#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,r;
	cin>>n>>l>>r;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++)
	{
		if(v[i]<l || v[i]>r)
			cout<<v[i]<<" ";
	}
}