// 1915. Number of Wonderful Substrings
#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
int main()
{
	string s;
	cin>>s;
	vector<long long int> arr(10,0);
	vector<long long int> count(1025,0);
	long long int ans=0;
	long long int val=0;
	count[0]=1;
	for(int i=0;i<s.length();i++)
	{
		//For even cases
		val=val^(1<<(s[i]-'a'));		
		deb(val);
		ans=ans+count[val];
		//For odd cases
		for(int i=0;i<10;i++)
		{
			int temp=val;
			temp=temp^(1<<i);
			ans=ans+count[temp];
		}
		deb(ans);
		count[val]++;
	}
	cout<<"Final ans "<<ans<<endl;
}