// https://codeforces.com/problemset/problem/289/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,d,a,b;
	cin>>n>>m>>d;
	vector<int> v;
	int flag=0,f=0;
	for(int i=0;i<m*n;i++)
	{
		cin>>a;
		if(f==0)
		{
			b=a;
			f=1;
		}
		if(a%d!=b%d)
			flag=1;
		v.push_back(a);
	}
	if(flag==1)
	{
		cout<<-1;
		return 0;
	}
	sort(v.begin(),v.end());
	int x=(m*n-1)/2,count=0;
	for(int i=0;i<v.size();i++)
	{
		count=count+(abs(v[x]-v[i])/d);
	}
	cout<<count<<endl;

}