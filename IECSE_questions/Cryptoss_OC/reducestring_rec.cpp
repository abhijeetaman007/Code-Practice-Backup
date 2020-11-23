#include<bits/stdc++.h>
using namespace std;
string s="\0";
void rec()
{
	int n=s.size();
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='0' && s[i+1]=='1'){
			s.erase(i,2);
			rec();
		}
	}
	return;
}
int main()
{
	// int n;
	// cin>>n;
	// vector<int> v(n);
	// string s;
	cin>>s;
	rec();
		cout<<s<<endl;
	cout<<"Ans is "<<s.size()<<endl;
}