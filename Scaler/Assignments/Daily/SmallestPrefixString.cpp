#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,ans="\0";
	cin>>a>>b;
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		ans=ans+a[i];
		if(a[i+1]<b[0])
			continue;
		else{
			break;
		}
	}
	ans=ans+b[0];
	cout<<ans<<endl;
}