#include<bits/stdc++.h>
using namespace std;
void expressioncheck(string s,vector<int> &v)
{
	int global=1,local=1;
	stack<int> gs;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			if(i-1>=0 && s[i-1]=='-')
			{
				gs.push(-1);
				global=(-1)*global;
			}
			else
			{
				gs.push(1);	
			}
		}
		if(s[i]>='a' && s[i]<='z')
		{
			if(i-1>=0 && s[i-1]=='-')
			{
				local=-1;
			}
			else
			{
				local=1;
			}
			v[s[i]-'a']=local*global;
		}
		if(s[i]==')')
		{
			global=global*gs.top();
			gs.pop();
		}
	}
}


int main()
{
	string s1,s2;
	cin>>s1>>s2;
	vector<int> v1(26),v2(26);
	expressioncheck(s1,v1);
	expressioncheck(s2,v2);
	if(v1==v2)
		cout<<"Yes, expressions are same"<<endl;
	else
		cout<<"No, expressions are not same"<<endl;
}