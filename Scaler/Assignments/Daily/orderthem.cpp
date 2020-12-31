#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n),b;
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(s.empty())
		{
			s.push(v[i]);
		}
		else
		{
			if(s.top()>=v[i] )
			{
				s.push(v[i]);
			}
			else
			{
				 if(b.size()==0 || s.top()>=b[b.size()-1])
				 {
				 	b.push_back(s.top());
				 	s.pop();
				 	while(!s.empty() && s.top()<=v[i])
				 	{
				 		if(b.empty()|| b[b.size()-1]<=s.top())
				 		{
				 			b.push_back(s.top());
				 			s.pop();
				 		}
				 		else
				 		{
				 			flag=1;
				 			break;
				 		}
				 	}
				 	if(s.empty()||s.top()>=v[i] )
				 	{
				 		s.push(v[i]);
				 	}
				 	else
				 	{
				 		flag=1;
				 		break;
				 	}
				 }
			}
		}
	}
	if(flag==1)
	{
		cout<<"No"<<endl;
	}
	else
	{
		if(s.empty()||b.size()==0|| s.top()>=b[b.size()-1])
			cout<<"Yes"<<endl;
		else
			cout<<"NO"<<endl;
	}

}