#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	vector<int> p(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	p[0]=v[0];
	for(int i=1;i<n;i++)
	{
		p[i]=p[i-1]+v[i];
	}
	for(auto x:p)
		cout<<x<<" ";
	cout<<endl;
	unordered_map<int,int> m;
	m[0]=-1;
	int a,b;
	int ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(m.find(p[i])!=m.end())
		{
			if(i-m[p[i]]>ans)
				{
					ans=i-m[p[i]];
					a=m[p[i]];
					b=i;
				}
		}		
			else
				m[p[i]]=i;
		
	}
	vector<int> res;
	for(int i=a+1;i<=b;i++)
	{
		res.push_back(v[i]);
		cout<<v[i]<<" ";
	}
	cout<<endl;

	cout<<"Ans is "<<ans<<endl;
}