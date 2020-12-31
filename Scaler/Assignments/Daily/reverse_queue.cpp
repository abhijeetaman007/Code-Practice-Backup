#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n>>a;
	queue<int> q1,q2;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		q1.push(x);
	}
	for(int i=0;i<a;i++)
	{
		q2.push(q1.front());
		q1.pop();
	}
	while(!q2.empty())
	{
		int c=0;
		while(c!=q2.size()-1)
		{
			q2.push(q2.front());
			q2.pop();
			c++;
		}
		q1.push(q2.front());
		q2.pop();
	}
	int x=n-a;
	while(x--)
	{
		q1.push(q1.front());
		q1.pop();
	}
	while(!q1.empty())
	{
		cout<<q1.front()<<endl;
		q1.pop();
	}
}