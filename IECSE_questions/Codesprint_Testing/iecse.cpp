#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str="iecse";
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int flag=0;
		for(int i=0;i<=(s.size()-str.size());i++)
		{
			int k=0;
			int j=i;
			while(k<str.size())
			{
				if(s[j]==str[k])
				{
					k++;
					j++;
				}
				else
					break;
			}
			if(k==str.size()){
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}