#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<vector<int> ,char> m1,m2;
	vector<int> v(3),v1(3);
	v[0]=0;v[1]=0;v[2]=0;
	m1[v]='0';m2[v]='0';
	v[0]=0;v[1]=0;v[2]=1;
	m1[v]='1';m2[v]='0';
	v[0]=0;v[1]=1;v[2]=0;
	m1[v]='1';m2[v]='0';
	v[0]=0;v[1]=1;v[2]=1;
	m1[v]='0';m2[v]='1';
	v[0]=1;v[1]=0;v[2]=0;
	m1[v]='1';m2[v]='0';
	v[0]=1;v[1]=0;v[2]=1;
	m1[v]='0';m2[v]='1';
	v[0]=1;v[1]=1;v[2]=0;
	m1[v]='0';m2[v]='1';
	v[0]=1;v[1]=1;v[2]=1;
	m1[v]='1';m2[v]='1';
	string x,y,temp,ans="\0";
	cin>>x>>y;
	int n=x.size()-y.size();
	 n=abs(n);
	for(int i=0;i<n;i++)
		temp.push_back('0');
	if(x.size()<y.size())
	{
		x=temp+x;
	}
	else
	{
		if(y.size()<x.size())
			y=temp+y;
	}
	x='0'+x;
	y='0'+y;
	char carry='0';
	for(int i=x.size()-1;i>=0;i--)
	{
		vector<int> v1(3);
		v1[0]=x[i]-'0';
		v1[1]=y[i]-'0';
		v1[2]=carry-'0';
		ans.push_back(m1[v1]);
		carry=m2[v1];
	}
	reverse(ans.begin(),ans.end());
	if(ans[0]=='0')
		ans.erase(0,1);
	cout<<"final "<<ans<<endl;
}