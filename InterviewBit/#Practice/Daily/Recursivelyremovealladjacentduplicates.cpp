#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(int i,string &str,string &s,int &flag)
{
	cout<<"str is "<<str[i]<<endl;
	if(str.empty())
		return;
	if(i==str.size())
	{
		cout<<"final"<<endl;
		return;
	}
	if(i<str.size() && str[i]!=str[i+1])
	{
		cout<<"forward"<<endl;
		s=s+str[i];
		removeDuplicates(i+1,str,s,flag);
	}
	else
	{
		if(flag==0)
			flag=1;
		int f=0;
		int j;
		for(j=i;j<str.size();j++)
		{
			cout<<"loop"<<endl;
			cout<<str[j]<<endl;
			if(j<str.size() && str[j]!=str[j+1])
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{

			cout<<"final forward"<<endl;
			cout<<"j is "<<j<<endl;
			removeDuplicates(j+1,str,s,flag);
		}

	}

}
int main()
{
	string str,s;
	cin>>str;
	int f=0;
	// int x;
	while(1)
	{	
		removeDuplicates(0,str,s,f);
			cout<<"str is "<<str<<endl;
			cout<<"s is "<<s<<endl;
			cout<<"f is "<<f<<endl;
		if(str==s)
			break;
		str=s;
		s="";
	}
	cout<<str<<endl;
}