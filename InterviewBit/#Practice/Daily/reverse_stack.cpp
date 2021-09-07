#include<bits/stdc++.h>
using namespace std;
void fun(stack<int> &s,int f)
{
	if(s.empty())
	{
		return;
	}
		int x=s.top();
		s.pop();
		fun(s,f);
	if(f==1)
	{
		s.push(x);
	}
	return;
}


int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(4);
	s.push(6);
	// int x=10;
	fun(s,0);
	cout<<"top is "<<s.top()<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}