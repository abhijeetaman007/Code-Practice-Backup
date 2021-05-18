#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,str,t;
	cin>>str>>s;
	t=s;
	int c=0;
	int j=0;
	// vector<bool> v1;
	// vector<bool> v2;
	// for(int i=0;i<)
	// for(int i=0;i<str.size();i++)
	// {

	// }
	while(j!=str.size())
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==str[j])
			{
				j++;
			}
		}
		if(j==0)
		{
			cout<<-1<<endl;
			return 0;
		}
		c=c+1;
	}
	cout<<c<<endl;
}