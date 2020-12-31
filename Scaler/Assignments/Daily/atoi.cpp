//atoi implementation -- used for string to int

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int flag=0;
	long long int ans=0;
	long long int MAX=INT_MAX;
	long long int MIN=INT_MIN;
	int sign=1;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='-' && i+1<s.size() && (((int)s[i+1]-'0')>=0 &&  (int)s[i+1]-'0'<=9))//handling -ve sign
		{
			sign=-1;
		}
		if(s[i]=='+' && i+1<s.size() && (((int)s[i+1]-'0')>=0 &&  (int)s[i+1]-'0'<=9))//handling +ve sign
		{
			sign=1;
			continue;
		}
		cout<<"sign is "<<sign<<endl;
		int x=(int)s[i]-'0';
		cout<<"x is "<<x<<endl;
		if(x>=0 && x<=9)
		{
			flag=1;
			ans=ans*(10);
			if(sign>0)
			ans=ans+x;
			else
				ans=ans-x;

			if(sign<0 && ans>0)
				ans=ans*(-1);
			if(sign<0)
				ans=max(ans,MIN);
			else
				ans=min(MAX,ans);
			if(ans==INT_MAX || ans==INT_MIN)
				break;
		}
		else
		{
			if(flag==1)
				break;
			else{
				ans=0;//case when garbage is encounterd first
				break;
			}
		}
	}
	cout<<"Ans is "<<ans<<endl;
}