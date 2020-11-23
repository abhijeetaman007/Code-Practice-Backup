#include<bits/stdc++.h>
using namespace std;
string pal(string &s,int c,string &s1)
{
	if(c==0)
	{
	    return s1;
	}
	s1=s1+s[c-1];
	return pal(s,c-1,s1);
}

int main()
{
	string s;
    cin>>s;
    string s1="\0";
	string x=pal(s,s.size(),s1);
	cout<<x<<endl;
	return 0;
}