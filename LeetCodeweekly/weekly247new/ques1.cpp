#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
int main()
{
	cout<<"Hello"<<endl;
	// int n;
	// cin>>
	// vector<int> n;
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.size();i++)
	{
		pair<bool,char> one;
		one.first=false;
		one.second = 'x';
		map<char,int> m;
		for(int j=0;j<s.size();j++)
		{
			if(m.find(s[i+j])==m.end())
			{
				if(!one.first)
				{
					c++;
					one.first=true;
					one.second=s[i+j];
					m[s[i+j]]++;
				}
				else
				{
					continue;
				}
			}
			else
			{
				if((m[s[i+j]]+1)%2!=0)
				{
					if(!one.first)
					{
						c++;
						m[s[i+j]]++;
						one.first=true;
					}
					else
					{
						continue;
					}
				}
				else
				{
					one.first=false;
					one.second='x';
					m[s[i+j]]++;
					c++;
				}
			}
		}
		c++;
		m.clear();
	}
	cout<<c<<endl;

}