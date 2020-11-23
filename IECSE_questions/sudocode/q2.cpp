#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	list<int> l;
	l.push_front(1);
	auto it = l.begin(); 
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]=='r')
		{
				it++;
			it=l.insert(it,2+i);
		}
		if(s[i]=='l')
		{
			it=l.insert(it,2+i);			
		}
	}
	for(auto x:l)
		cout<<x<<" ";
}