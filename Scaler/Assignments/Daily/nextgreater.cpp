#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	vector<int> v(n),ans(n);
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=0;i<n;i++)
	{
		if(s.empty() || v[s.top()]>=v[i])
		{
			s.push(i);
		}
		else
		{

			while(!s.empty() && v[s.top()]<=v[i] )
			{
				cout<<"in"<<endl;
				cin>>x;
				ans[s.top()]=v[i];
				s.pop();
			}
			s.push(i);
		}
	}
	while(!s.empty())
	{
		ans[s.top()]=-1;
		s.pop();
	}

	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}

}