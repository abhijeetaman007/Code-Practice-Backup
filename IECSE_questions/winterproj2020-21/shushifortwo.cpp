// https://codeforces.com/problemset/problem/1138/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	int a=0,b=0,c=0,ans=0;
	for(int i=0;i<n;i++)
	{
		if(i-1<0 || v[i-1]!=v[i])
		{
			if(v[i]==1)
			{
				a=1;
			}
			if(v[i]==2)
			{
				b=1;
			}
		}
		else if(v[i-1]==v[i])
		{
			if(v[i]==1)
				a++;
			if(v[i]==2)
				b++;
		}
		c=min(a,b);
		if(2*c>ans)
			ans=2*c;
	}
	cout<<ans<<endl;
}
