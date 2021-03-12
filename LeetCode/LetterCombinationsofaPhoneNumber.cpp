#include<bits/stdc++.h>
using namespace std;
vector<string> solve(string s)
{
	map<char,string> m;

	m['2']="abc";
	m['3']="def";
	m['4']="ghi";
	m['5']="jkl";
	m['6']="mno";
	m['7']="pqrs";
	m['8']="tuv";
	m['9']="wxyz";

	int n1=s.length();
	vector<string> v;
	string n=to_string(n1);
	if(n=="0")
	{
		return v;
	}
	else if(n=="1")
	{
		string s1=m[s[0]];
		for(int i=0;i<s1.size();i++)
		{
			string temp="\0";
			temp=temp+s1[i];
			v.push_back(temp);
		}
		return v;

	}
	else if(n=="2")
	{

		string s1=m[s[0]];
		string s2=m[s[1]];
		for(int i=0;i<s1.size();i++)
		{
			for(int j=0;j<s2.size();j++)
			{
				string temp="\0";
				temp=temp+s1[i]+s2[j];
					v.push_back(temp);
			}
		}
		return v;
	}
	else if(n=="3")
	{
		string temp="\0";
		string s1=m[s[0]];
		string s2=m[s[1]];
		string s3=m[s[2]];
		for(int i=0;i<s1.size();i++)
		{
			for(int j=0;j<s2.size();j++)
			{
				for(int k=0;k<s3.size();k++)
				{
					string temp="\0";
					temp=temp+s1[i]+s2[j]+s3[k];
					v.push_back(temp);
				}
			}
		}
		return v;

	}
	else
	{
		string temp="\0";
		string s1=m[s[0]];		
		string s2=m[s[1]];		
		string s3=m[s[2]];		
		string s4=m[s[3]];
		for(int i=0;i<s1.size();i++)
		{
			for(int j=0;j<s2.size();j++)
			{
				for(int k=0;k<s3.size();k++)
				{
					for(int l=0;l<s4.size();l++)
					{
						string temp="\0";
						temp=temp+s1[i]+s2[j]+s3[k]+s4[l];
						v.push_back(temp);
					}			
				}
			}
		}		
		return v;
	}
}




int main()
{
	string s;
	cin>>s;
	vector<string> v;
	v=solve(s);
	for(auto x:v)
		cout<<x<<" ";

}