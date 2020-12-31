#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	vector<int> v(a);
	for(int i=0;i<a;i++)
	{
		cin>>v[i];
	}
	stack<int> s;
	s.push(b);
	for(int i=0;i<a;i++)
	{
		if(v[i]!=0)
		{
			s.push(v[i]);
		}
		else
		{
			s.pop();
		}
	}
	cout<<s.top()<<endl;
}