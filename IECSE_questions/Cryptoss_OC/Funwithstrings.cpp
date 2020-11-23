#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str="x";
	for(int l=0;l<n;l++)
	{
		string s;
		cin>>s;
		if(str=="x")
		{
			str=str+s;
			str=str+"x";
		}
		else
		{
			string temp=str,t;
			t="x"+s;
			t=t+"x";
			unordered_map<int,string> m;
			int max=0;

			for(int i=0;i<str.length();i++)
			{
				int c=0;
				string tempstr=temp;
				if(temp[i]=='x' && i+1<temp.size()&&temp[i+1]!='x' || i==(temp.size()-1)&&temp[i]=='x' )
				{
					tempstr.insert(i+1,t);
					for(int j=0;j<tempstr.size();j++)
					{
						if(tempstr[j]=='a')
						{
							for(int k=j+1;k<tempstr.size();k++)
							{
								if(tempstr[k]=='b')
								c=c+1;
							}
						}

					}
				}
				if(c>max){
					max=c;
				}
				m[c]=tempstr;
				// cout<<"present str is "<<tempstr<<endl;
			}
			str=m[max];
		}
		// cout<<"str is "<<str<<endl;
	}
	int ans=0;
	// cout<<"final string is "<<str<<endl;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='a')
		{
			for(int j=i+1;j<str.length();j++)
			{
				if(str[j]=='b')
					ans=ans+1;
			}
		}
	}
	cout<<"Ans is "<<ans<<endl;
}