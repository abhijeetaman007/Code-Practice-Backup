#include<bits/stdc++.h>
using namespace std;
int main()
{
	// int n;
	// cin>>n;
	// vector<int> v;
	// for(int i=0;i<n;i++)
	// 	cin>>v[i];
	string s;
	cin>>s;
	// stack<char> st;
	long long int c=0;
	// for(int i=0;i<s.size();i++)
	// {
	// 	if(s[i]=='1')
	// 	{
	// 		c++;
	// 		if(st.empty())
	// 		{
	// 			st.push('1');
	// 		}
	// 		else
	// 		{
	// 			st.pop();
	// 			c++;
	// 			st.push('1');
	// 		}
	// 	}
	// }
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1')
			c++;
	}
	c=(c*(c+1))/2;
	cout<<c<<endl;
}