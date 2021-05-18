#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		int ans=0;
		vector<int> flag(s.size(),false);
		for(int i=1;i<n;i++)
		{
			if(s[i-1]==s[i] && !flag[i-1])
				flag[i]=true;
			if(i>1 && s[i-2]==s[i] && !flag[i-2])
				flag[i]=true;
			ans+=flag[i];
		}
		cout<<ans<<endl;
	}
}