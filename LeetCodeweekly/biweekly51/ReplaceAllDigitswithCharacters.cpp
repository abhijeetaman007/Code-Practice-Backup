#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string str="";
	for(int i=0;i<s.size();i++)
	{
		if(i%2==0)
		{
			str=str+s[i];
		}
		else
		{
			str=str+(char)((int)s[i-1]+(int)s[i]-'0');
		}
	}
	cout<<str<<endl;
}