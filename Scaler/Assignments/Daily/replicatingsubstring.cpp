#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	string s;
	cin>>a>>s;
	unordered_map<char,int>m;
	for(int i=0;i<s.size();i++)
	{
		m[s[i]]++;
	}
	
	for(auto itr=m.begin();itr!=m.end();itr++)
	{
		if((itr->second)%a!=0)
		{
			cout<<-1<<endl;
			return 0;
		}
	}	
	cout<<1<<endl;
}