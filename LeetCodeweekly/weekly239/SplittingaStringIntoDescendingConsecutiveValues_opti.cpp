#include<bits/stdc++.h>
using namespace std;
string trim(string s)
{
	string s1;
	int f=0;
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]!='0' && f==0)
		{
			f=1;
		}
		if(f==1)
			s1=s1+s[i];
	}
	if(s1=="")
		s1="0";
	return s1;
}

bool diff(string prev,string pres)
{
	cout<<"inside diff"<<endl;
	string s1,s2;
	s1=trim(prev);
	s2=trim(pres);
	if(s1.size()<s2.size())
		swap(s1,s2);

	// cout<<"s1 is "<<s1<<endl;
	// cout<<"s2 is "<<s2<<endl;

	int i=s2.size()-1;
	int c=0;
	string ans="";
	int x=s2[i]-'0';
	// cout<<x<<endl;
	if(x+1>=10)
	{
		c=1;
		ans.push_back('0');
	}
	else
	{
		// cout<<"else "<<(char)(x+1+'0')<<endl;
		c=0;
		ans.push_back((char)(x+1+'0'));
	}
	i--;
	while(i>=0)
	{

		// cout<<"ans is "<<ans<<endl;
		x=s2[i]-'0';
		// cout<<x<<endl;
		// cout<<"x+c "<<x+c<<endl;
		if(x+c>=10)
		{
			c=1;
			ans.push_back('0');
		}
		else
		{
			ans.push_back((char)(x+c+'0'));
			c=0;	
		}
		i--;
	}
	if(c==1)
		ans.push_back(c+'0');
	reverse(ans.begin(),ans.end());
	// cout<<"string"<<endl;
	// cout<<ans<<endl;
	// cout<<s1<<endl;
	// cout<<s2<<endl;
	// cout<<"diff result"<<s2<<" "<<s1<<" "<<ans<<" "<<endl;
	if(s1==ans){
		cout<<"same"<<endl;
		return true;
	}
	return false;	
}

bool greaterCheck(string s1,string s2)
{
	cout<<"inside greater"<<endl;

	s1=trim(s1);
	s2=trim(s2);
	cout<<s1<<" "<<s2<<endl;
	if(s1.size()!=s2.size())
	{
		if(s1.size()>s2.size())
			return true;
		return false;
	}
	if(s1==s2)
		return false;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]==s2[i])
		{
			continue;
		}
		else		
			return s1[i]>s2[i];
	}
	return false;	
}	



bool check(string str,string prev,int idx)
{
	cout<<"check"<<endl;
	if(idx==str.size())
	{
		cout<<"FOUND"<<endl;
		return true;
	}
	string temp;
	bool ans=false;
	for(int i=idx;i<str.size();i++)
	{
		temp=temp+str[i];
		cout<<"temp is "<<temp<<endl;
		string pres=temp;
		// int pres=value(str,idx,i);
		// cout<<"present is "<<pres<<endl;
		if(prev=="")
		{
			if(i+1<str.size())
				ans=ans || check(str,temp,i+1);
			else
				 ans=ans||false;
		}	
		else if(greaterCheck(pres,prev))
		{
			cout<<"pres is greater"<<"pres: "<<pres<<"prev: "<<prev<<endl;
			ans=ans||false;
			return ans;
		}
		else if(diff(prev,pres))
		// else if(diff(prev-pres)==1)
		{
			cout<<"second if"<<endl;
			ans=ans || check(str,temp,i+1);
		}

	}
	return ans;
}


int main()
{
	string str;
	cin>>str;
	// cout<<"ans is "<<check(str,"",0);
	// cout<<value(str,0,4);
	cout<<greaterCheck("419","0420");
	// diff("99","98");
}