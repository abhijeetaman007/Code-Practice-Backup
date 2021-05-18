#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int j=1;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int c=0;
		for(int i=0;i<s.size()/2;i++)
		{
			if(s[i]!=s[n-i-1])
			{
				c++;
			}
		}
		cout<<"Case #"<<j<<": "<<abs(k-c)<<endl;
		j++;	
	}
}