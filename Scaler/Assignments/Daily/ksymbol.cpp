#include<bits/stdc++.h>
using namespace std;
bool ksymbol(int a,int b)
{
	if(a==1)
		return 0;
	else
	{
		int k=1<<(a-2);
		if(b<=k)
			return ksymbol(a-1,b);
		else
			return !(ksymbol(a-1,b-k));
	}
}
int main()
{
	int a,b;
	cin>>a>>b;
	bool ans;
	ans=ksymbol(a,b);
	cout<<ans<<endl;
}