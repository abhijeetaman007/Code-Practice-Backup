#include<bits/stdc++.h>
using namespace std;
bool isValid(int k,vector<string> &v,string s)
{
	for(int i=0;i<v.size();i++)
	{
		// string x=v[i];
		for(int j=0;j<k;j++)
		{
			if(v[i][j]!=s[j])
				return false;
		}
	}
	return true;
}
int main()
{
	vector<string> v;
	int n;
	cin>>n;
	string str,s;
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s.size()<min){
			min=s.size();
			str=s;
		}
		v.push_back(s);
	}
	int ans=0;
	int low=1;
	int high=s.size();
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(isValid(mid,v,s))
		{
			ans=mid;
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	str='\0';
	for(int i=0;i<ans;i++)
	{
		str=str+s[i];
	}
	cout<<"Ans is "<<ans<<endl;
	cout<<str<<endl;
}