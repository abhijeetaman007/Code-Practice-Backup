#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<< " " <<x<<endl;
int main()
{
	string str;
	getline(cin,str);
	cout<<"Str is "<<str<<endl;
	vector<pair<int,string> > v;
		string temp;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' ')
			continue;
		if(i+1==str.size() || str[i+1]==' ')
		{	
			deb(temp);
			v.push_back({str[i]-'0',temp});
			temp.clear();
		}
		else
		temp=temp+str[i];
	}
	sort(v.begin(),v.end());
	string ans;

	for(int i=0;i<v.size();i++)
	{
		ans=ans+v[i].second;
		if((i+1)!=v.size())
		{
			ans=ans+' ';
		}
	}
	cout<<"ans is"<<endl;
	cout<<ans<<endl;

}