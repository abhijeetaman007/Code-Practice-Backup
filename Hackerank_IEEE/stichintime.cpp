#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,t,c=0;
	cin>>n;
	deque<int>v1,v2;
	cin>>a>>b;
	while(a!=0)
	{
		v1.push_front(a%10);
		a=a/10;
	}
	while(b!=0)
	{
		v2.push_front(b%10);
		b=b/10;
	}
	//cout<<v1.front()<<" "<<v2.front()<<endl;
	while(!v1.empty())
	{
		//cout<<v1.front()<<" "<<v2.front()<<endl;
		if(v1.front()!=v2.front())
		{
			t=v1.front();
			v1.pop_front();
			v1.push_back(t);
			c+=1;
		}
		else
		{
			v1.pop_front();
			v2.pop_front();
			c+=1;
		}	
	}
	cout<<c<<endl;
	
}