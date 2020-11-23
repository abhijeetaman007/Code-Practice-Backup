//Balanced Bracket
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<int> v;
		int flag=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='{'||s[i]=='['||s[i]=='(')
			{
				v.push(s[i]);	
				continue;
			}
			else
			{
				if(s[i]=='}')
				{
					if(v.empty())
					{
						cout<<"NO"<<endl;
						flag=1;
						break;
					}
					else
					{
						if(v.top()=='{')
						{
							v.pop();
							continue;
						}
						else
						{
							cout<<"NO"<<endl;
							flag=1;
							break;
						}
					}
				}

				if(s[i]==']')
				{
					if(v.empty())
					{
						cout<<"NO"<<endl;
						flag=1;
						break;
					}
					else
					{
						if(v.top()=='[')
						{
							v.pop();
							continue;
						}
						else
						{
							cout<<"NO"<<endl;
							flag=1;
							break;
						}
					}
				}

				if(s[i]==')')
				{
					if(v.empty())
					{
						cout<<"NO"<<endl;
						flag=1;
						break;
					}
					else
					{
						if(v.top()=='(')
						{
							v.pop();
							continue;
						}
						else
						{
							cout<<"NO"<<endl;
							flag=1;
							break;
						}
					}
				}
			}
		}
		if(v.empty()==1 && flag==0)
			cout<<"YES"<<endl;
		if(v.empty()==0 && flag==0)
			cout<<"NO"<<endl;
	}
}