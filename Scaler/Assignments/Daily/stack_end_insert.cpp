#include<bits/stdc++.h>
using namespace std;
void fun(stack<int> &s,int x)
{
	if(s.empty())
	{
		s.push(10);
		return;
	}
	int y=s.top();
	s.pop();
	fun(s,x);
	s.push(y);
	return ;
}


int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(4);
	s.push(6);
	int x=10;
	fun(s,x);
	cout<<"top is "<<s.top()<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}