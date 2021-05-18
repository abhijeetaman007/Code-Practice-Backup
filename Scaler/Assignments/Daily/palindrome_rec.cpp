#include<bits/stdc++.h>
using namespace std;
int pal(string s,int c,string s1)
{
	if(c==0)
	{
		// cout<<"inside"<<endl;
		// cout<<s<<endl;
		// cout<<s1<<endl;
		if(s==s1){
			// cout<<"palindrome"<<endl;
			return 1;
		}
		else
			return 0;
	}
	s1=s1+s[c-1];
	// cout<<s1<<endl;
	// cout<<s<<endl;
	return pal(s,c-1,s1);
}

int main()
{
	string s="aman";
	string s1="\0";
	int x=pal(s,s.size(),s1);
	cout<<x<<endl;
}	