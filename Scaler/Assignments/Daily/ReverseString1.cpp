#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,s,temp;
	getline(cin,str);
	// for(int i=0;i<str.size();i++)
	// {
	// 	// cout<<"ch is "<<str[i]<<" "<<endl;
	// 	if(str[i]==' ')
	// 	{
	// 		continue;
	// 	}
	// 	else
	// 	{
	// 		temp=temp+str[i];
	// 		if((str[i+1]==' ' && i+1<str.size()) || i+1==str.size())
	// 			{
	// 				// cout<<"temp is "<<temp<<endl;
	// 				s=s+temp;
	// 				s=s+' ';
	// 				temp='\0';	
	// 			}	
	// 	}
	// }
	// // if(s[s.size()-1]==' ')
	// // {
	// // 	s.erase(s.size()-1);
	// // }
	s=str;
	vector<string> v;	
	temp='\0';
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
			if( (s[i+1]!=' '||i+1==s.size() ))
			{
				cout<<temp<<endl;
				v.push_back(temp);
				temp="\0";
			}
		}
		else
		{
			temp=temp+s[i];
		}
	}
	if(temp!="\0")
	{
		cout<<temp<<endl;
		v.push_back(temp);
		temp='\0';

	}
	string ans;
	for(int i=v.size()-1;i>=0;i--)
	{
		ans=ans+v[i];
		if(i!=0)
			ans=ans+' ';
	}

	if(ans[ans.size()-1]==' ')
	{
		ans.erase(ans.size()-1);	
	}	

	cout<<"Final Ans is"<<ans<<"end"<<endl;
	

}