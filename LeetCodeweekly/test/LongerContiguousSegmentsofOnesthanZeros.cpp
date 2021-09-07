#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" : "<<x<<endl;
int main()
{
	string s;
	cin>>s;
	int omax=0,zmax=0;
	int o=0,z=0;

	for(int i=0;i<s.size();i++)
	{
		if(i==0)
		{
			if(s[i]=='0')
			{
				z++;
			}else
			{
				o++;
			}
		}
		else if(s[i-1]==s[i])
		{
				if(s[i]=='0')
				{
					z++;
				}
				else
				{
					o++;
				}
		}
		else
		{
			if(s[i]=='1')
			{
				o=1;
				z=0;
			}
			else
			{
				z=1;
				o=0;
			}
		}
		zmax=max(z,zmax);
		omax=max(o,omax);
	}
	bool ans=false;
	if(omax>zmax)
		ans=true;
	deb(ans);
}