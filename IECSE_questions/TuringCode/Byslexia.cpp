#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,str;
	cin>>s;
	map<int,char> m;
	for(int i=0;i<s.size();i++)
	{
		int a;
		cin>>a;	
		m[a]=s[i];
	}
	for(auto it=m.begin();it!=m.end();it++)
	{
		str=str+(it->second);
	}
	cout<<str;

}