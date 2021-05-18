#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
	cin>>s;
	int n=s.size();
	int z=0,o=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0'){
			z++;
		}
		if(s[i]=='1')
		{
			o++;
		}
	}
	deb(z);
	deb(o);

	int ans=-1;
	if(abs(z-o)==0 || abs(z-o)==1)
	{	ans=0;
		char even_char,odd_char;
		if(o>z){
			even_char='1';
			odd_char='0';
		}
		else if(z>o)
		{
			even_char='0';
			odd_char='1';
		}
		else
		{
			// int zero=
			even_char='0';
			odd_char='1';

			// if(s[0]=='0'){
			// 	even_char='0';
			// 	odd_char='1';
			// }
			// else
			// {
			// 	even_char='1';
			// 	odd_char='0';				
			// }
		}
		deb(even_char);
		deb(odd_char);
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				if(s[i]==even_char)
					continue;
				else
				{
					for(int j=i+1;j<n;j++)
					{
						if(j%2!=0 && s[j]==even_char)  
						{
							char temp=s[i];
							s[i]=s[j];
							s[j]=temp;
							ans++;
							break;
						}
					}
				}
			}
			else
			{
				if(s[i]==odd_char)
					continue;
				else
				{
					for(int j=i+1;j<n;j++)
					{
						if(j%2==0 && s[j]==odd_char)
						{
							char temp=s[i];
							s[i]=s[j];
							s[j]=temp;
							ans++;
							break;
						}
					}
				}
			}
		}
	}
	cout<<"Final ans is "<<ans<<endl;
	}

}
