#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='#')
		{
			if(t.size()!=0)
			t.erase(t.size()-1,1);
		}
		else
			t=t+s[i];
	}
	cout<<t<<endl;
}