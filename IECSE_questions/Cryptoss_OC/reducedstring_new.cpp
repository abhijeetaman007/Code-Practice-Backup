#include<bits/stdc++.h>
using namespace std;;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int flag=0;
	while(1)
	{
		flag=0;
		for(int i=0;i<s.size();i++)
		{
			if(i+1<s.size() && s[i]=='0'&& s[i+1]=='1')
			{
				s.erase(i,2);
				flag=1;
				break;
			}
		}
		if(flag==1)
			continue;
		else
			break;
	}	
	cout<<s.size()<<endl;
}