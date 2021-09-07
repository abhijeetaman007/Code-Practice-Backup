#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
{
	string ab=a+b;
	string ba=b+a;
	return ab>ba;
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
	string s="\0";
 	vector<string> v1(n);
 	for(int i=0;i<v1.size();i++)
 	{
 		v1[i]=to_string(v[i]);
 	}
	sort(v1.begin(),v1.end(),compare);
	for(int i=0;i<v1.size();i++)
		s=s+v1[i];
	cout<<s<<endl;
}