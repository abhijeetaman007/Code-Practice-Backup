//https://www.hackerrank.com/challenges/strong-password/problem?h_r=internal-search
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n;
	cin>>s;
		int c=4;
		bool upper=false,lower=false,spcha=false,number=false;
		for(int i=0;i<n;i++)
		{
			if(c!=0)
			{

				if(!upper)
				{
					if(s[i]>='A'&& s[i]<='Z')
						{
							upper=true;
							c=c-1;
							//cout<<"upper found"<<endl;
						}
				}
				if(!lower)
				{
					if(s[i]>='a'&& s[i]<='z')
						{
							lower=true;
							c=c-1;
							//cout<<"lower found"<<endl;
						}	
				}
				if(!spcha)
				{
					if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='-'||s[i]=='+')
						{
							spcha=true;
							c=c-1;
							//cout<<"sp ch found"<<endl;
						}
				}
				if(!number)
				{
					if(s[i]>='0' && s[i]<='9')
						{
							number=true;
							c=c-1;
							//cout<<"number found"<<endl;
						}	
				}

			}
			else
				break;
		}
		//cout<<"c is "<<c<<endl;
		if(n>=6)
			 cout<<c<<endl;
		else
		{
			cout<<max(6-n,c)<<endl;
		}


}