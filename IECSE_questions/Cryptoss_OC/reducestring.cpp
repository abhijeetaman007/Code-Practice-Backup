#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	// cin>>n;
	while(1){
	string s;
	cin>>s;
	n=s.size();
	long long int z=0,c=0;
	for(int i=0;i<n;i++)
	{
		c=c+1;
		if(s[i]=='0')
		{
			z=z+1;
		}
		if(s[i]=='1')
		{
			if(z>0)
			{
				z=z-1;
				c=c-2;
			}
			if(i+1<n && s[i+1]=='0')
				z=0;
		}
	}
	cout<<"Ans is "<<c<<endl;
}
}