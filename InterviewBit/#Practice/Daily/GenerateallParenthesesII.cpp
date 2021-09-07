#include<bits/stdc++.h>
using namespace std;
void func(int i,int n,int co,int cc,vector<string>&ans,string &s)
{
	if(i==n)
	{
		ans.push_back(s);
		return;
	}
	if(co<n/2){
		s.push_back('(');
		func(i+1,n,co+1,cc,ans,s);
		s.pop_back();
	}
	if(co>cc){
		s.push_back(')');
		func(i+1,n,co,cc+1,ans,s);
		s.pop_back();
	}
}

int main()
{
	int n;
	cin>>n;
	vector<string> ans;
	string s="";
	func(0,2*n,0,0,ans,s);
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<endl;
}