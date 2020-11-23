#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int k;
	cin>>k;
	int a,b;
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	{
		if(m.find(k-v[i])==m.end())
		{
			m[v[i]]=i;
		}
		else
		{
			a=m[k-v[i]]+1;
			b=i+1;
		}
	}
	if(a>b)
		swap(a,b);
	cout<<a<<" "<<b<<endl;

}	