#include<bits/stdc++.h>
using namespace std;
void func(int i,int n,map<char,string> &m,vector<string> &ans,string &s,string &s1)
{
	if(i==n)
	{
		ans.push_back(s1);
		return;
	}
	string str=m[s[i]];
	for(int j=0;j<str.size();j++)
	{
		s1.push_back(str[j]);
		func(i+1,n,m,ans,s,s1);
		s1.pop_back();
	}
}

int main()
{
	string s;
	cin>>s;
	map<char,string> m;
    m['0']="0";
    m['1']="1";
    m['2']="abc";
    m['3']="def";
    m['4']="ghi";
    m['5']="jkl";
    m['6']="mno";
    m['7']="pqrs";
    m['8']="tuv";
    m['9']="wxyz";
    vector<string> ans;
    string s1;
    func(0,s.size(),m,ans,s,s1);
    for(int i=0;i<ans.size();i++)
    {
    	cout<<ans[i]<<" ";
    }
}