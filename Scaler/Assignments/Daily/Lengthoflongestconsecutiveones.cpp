#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int> v,max;
	int c=1;
	int a,b=0,d=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==s[i+1] && i+1<s.size())
		{
			c=c+1;
		}
		else
		{
			v.push_back(c);
			c=1;
		}
	}
	if(s[0]=='1')
		a=0;
	else
		a=1;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	if(a+4<v.size())
		b=1;
	if(a+2<v.size())
		d=1;	
	c=0;
	cout<<"a is "<<a<<endl;
	for(int i=a;i<v.size();i=i+2)
	{
		c=0;
			if(i+2<v.size() && v[i+1]==1 )
			{
				c=v[i]+v[i+2]+b;
				cout<<"c is "<<c<<endl;
				max.push_back(c);
				continue;
			}
			else
			{
				c=v[i]+d;
				cout<<"c is "<<c<<endl;
				max.push_back(c);
			}
	}
	cout<<"Ans is "<<*max_element(max.begin(),max.end());

}