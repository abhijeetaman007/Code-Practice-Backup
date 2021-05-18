#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int temp=86400;
	int i=0;	
	while(n-- && t>0)
	{
		t=t-(temp-v[i]);
		i++;
	}
	cout<<i<<endl;
}