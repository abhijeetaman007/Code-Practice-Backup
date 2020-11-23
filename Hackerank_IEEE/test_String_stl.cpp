#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="xyz";
	cout<<s<<endl;
	cout<<s.size()<<endl;
	s.insert(s.size(),"abc");
	cout<<s<<endl;
	s.push_back('g');
	cout<<s<<endl;
	s.pop_back();
	cout<<s<<endl;
	s.erase(s.end()-3,s.end());
	cout<<s<<endl;
}