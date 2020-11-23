#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,a,count=0;
	cin>>n>>q;
	stack<int> s,s1;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s.push(a);
	}
	int num=2;
	while(count!=q)
	{	
		int flag=0;
		for(int i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;	
			}
		}
	 	if(flag==0)
		{
			count=count+1;
			stack<int> s2,s1;
			while(!s.empty())
			{
				if(s.top()%num==0)
				{
					s1.push(s.top());
					s.pop();
				}
				else
				{
					s2.push(s.top());
					s.pop();
				}
			}
			while(!s1.empty())
			{
				cout<<s1.top()<<endl;
				s1.pop();
			}
			s=s2;
		}
		num=num+1;
	}
	
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}