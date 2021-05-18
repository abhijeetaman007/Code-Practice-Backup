#include<bits/stdc++.h>
using namespace std;
int value(string str,int l,int r)
{
	cout<<"inside value"<<endl;
	int ans=0;
	int j=0;
	for(int i=r;i>=l;i--)
	{
		ans=ans+(str[i]-'0')*pow(10,j);
		j++;
	}
	return ans;
}
bool check(string str,int prev,int idx)
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
		int pres=value(str,idx,i);
		cout<<"present is "<<pres<<endl;
		if(prev==INT_MAX)
		{
			if(i+1<str.size())
				ans=ans || check(str,pres,i+1);
			else
				 ans=ans||false;
		}	
		else if(pres>prev)
		{
			cout<<"pres is greater"<<"pres: "<<pres<<"prev: "<<prev<<endl;
			ans=ans||false;
			return ans;
		}
		else if(pres<prev && prev-pres==1)
		{
			cout<<"second if"<<endl;
			ans=ans || check(str,pres,i+1);
		}

	}
	return ans;
}


int main()
{
	string str;
	cin>>str;
	cout<<"ans is "<<check(str,INT_MAX,0);
	// cout<<value(str,0,4);
}