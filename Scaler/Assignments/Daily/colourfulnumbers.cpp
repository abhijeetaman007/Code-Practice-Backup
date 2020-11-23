#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unordered_set<int> s;
	int	ans=1;
	int a=1;
	int temp=n;
	vector<int> v;
	while(temp>0)
	{
		v.push_back(temp%10);
		temp=temp/10;
	}
	// for(int i=0;i<v.size();i++)
	// 	cout<<v[i]<<endl;

	for(int i=0;i<=(v.size()-1)/2;i++)
	{
		swap(v[i],v[v.size()-1-i]);
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	for(int i=0;i<n;i++)
	{
		int p=0;
		int q=p+i;
		// cout<<"p is "<<p<<" q is "<<q<<endl;
		while(q<v.size())
		{
		cout<<"p is "<<p<<" q is "<<q<<endl;
			ans=1;
			for(int j=p;j<=q;j++)
			{
				ans=ans*v[j];
			}
			cout<<ans<<endl;
			if(s.find(ans)==s.end())
			{
				s.insert(ans);
			}
			else
			{
				a=0;
				cout<<0<<endl;
				return 0;
			}	
			p=p+1;
			q=q+1;
		}
	}
	cout<<1<<endl;
	return 0;
}