#include<bits/stdc++.h>
using namespace std;
int checkseq(string a,string b,int c,int ct,int ans)
{
	// cout<<"c is "<<c<<"ct is "<<ct<<endl;
	if(ct==a.size()){
		ans=1;
		return ans;
	}
	if(c==b.size()){
		ans=0;
		return ans;
	}
	// cout<<b[c]<<" "<<a[ct]<<endl;
	if(b[c]==a[ct])
	{
		ct=ct+1;
	}
		c=c+1;
	return checkseq(a,b,c,ct,ans);
}


int main()
{
	string a="hac";
	string b="cathtifahc";
	int c=0;
	int ct=0;
	int ans=0;
	cout<<checkseq(a,b,c,ct,ans);
}