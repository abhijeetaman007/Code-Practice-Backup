#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	vector<int> ans(n,-1);
	// [n-1]=-1;
	int min;
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(v[i]>v[j])
			{
				min=j;
				ans[i]=(j-i-1);
				break;
			}
		}
	}
	for(auto x:ans)
		cout<<x<<" ";
}