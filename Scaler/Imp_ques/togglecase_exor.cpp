#include<bits/stdc++.h>
using namespace std;
int main()
{
	// char x='a';
	string s="xYgHklY",str;
	for(int i=0;i<s.size();i++)
	{
		str=str+(char)((int)s[i]^32);
	}
	cout<<str<<endl;
}