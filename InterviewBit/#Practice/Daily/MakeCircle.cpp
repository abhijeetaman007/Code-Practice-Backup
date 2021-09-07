#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string>v;
	map<char,vector<pair<char,char> > >startWith;
	for(int i=0;i<n;i++)
	{	
		string s;
		cin>>s;
		v[i]=s;
		startWith[s[0]].push_back({s.front(),s.back()});
	}
	pair<char,char> start={v[0].front(),v.back()};
	for(int i=0;i<n-1;i++)
	{
		 	
	}
}