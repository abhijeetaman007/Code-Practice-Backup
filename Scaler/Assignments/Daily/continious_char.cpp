#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0;
	int j=1;
	string s;
	cin>>s;
	int n=s.size();
	int b;
	cin>>b;
	int ans=0;
	while(i<n)
	{
		int temp=b;
		while(b>0&&j<n)
		{
			if(s[j]==s[i])
			{
				j++;
				continue;
			}
			else
			{
				j++;
				b--;
			}
		}
		if(j-i+1>ans)
			ans=j-i+1;
		if(j>=n)
			break;
		i++;
		j=i+1;
		b=temp;
	}
	cout<<ans<<endl;
}