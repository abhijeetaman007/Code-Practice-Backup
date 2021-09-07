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
	int min=INT_MAX;
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	{
		if(m.find(v[i])==m.end())
		{
			m[v[i]]=i;
		}
		else
		{
			if(i-m[v[i]]<min)
				min=i-m[v[i]];
			// cout<<min<<endl;
		}
	}
	if(min==INT_MAX)
		cout<<-1<<endl;
	else
	cout<<"Ans is "<<min<<endl;

}