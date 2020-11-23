// number in string
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	n=n+1;
	string s,ans;
	while(n!=0)
	{
		char c=n%10+'0';   //imp step
		cout<<c<<endl;
		// s.push_front(c);
		s=s+c;
		n=n/10;
	}
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0')
		{
			s[i]='1';
		}
	}
	// cout<<"S is "<<s<<endl;
	for(int i=s.size();i>=0;i--)
	{
		ans=ans+s[i];
	}
	cout<<"Ans is "<<ans<<endl;
}