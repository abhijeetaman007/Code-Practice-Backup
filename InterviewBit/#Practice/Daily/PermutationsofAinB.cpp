#include<bits/stdc++.h>
using namespace std;
int main()
{
	string sub,s;
	cin>>sub>>s;
	int m=sub.size();
	int n=s.size();
	if(m>n)
		cout<<0<<endl;
	else
	{
		vector<int> a(256),b(256);
		for(int i=0;i<m;i++)
		{
			a[sub[i]]++;
			b[s[i]]++;
		}
		int c=0;
		if(a==b)
			c++;
		// b[s[0]]--;
		int j=0;
		for(int i=m;i<n;i++)
		{
			b[s[i]]++;
			b[s[j]]--;
			if(a==b)
				c++;
			j++;
		}
		cout<<c<<endl;
	}
}