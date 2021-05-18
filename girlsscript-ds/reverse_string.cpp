#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t="\0",str;
	getline(cin,s);
	vector<string> v;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
			if(s[i]==' ')
			{
				if(t!="")
				v.push_back(t);
			}
			t="\0";
		}
		else
		{
			if(i==(s.size()-1))
			{
				t=t+s[i];	
				v.push_back(t);
			}
			else
			t=t+s[i];
		}
	}
	for(int i=v.size()-1;i>=0;i--)
	{	
		str=str+v[i];
		if(i!=0)
		str=str+' ';
	}
	cout<<str;
}