#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	// int x=0,a=0,b=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int c=0,ans=0;
	for(int i=0;i<32;i++)
	{
		c=0;
		for(int j=0;j<n;j++)
		{
			if(((1<<i)&v[j])>0)
			{
				c+=1;
			}
		}
		ans=ans+((c%3)<<i);
	}
	cout<<"Ans is "<<ans<<endl;

}