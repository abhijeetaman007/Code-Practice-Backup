#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		int i=0,j=n-1,c=0,d=0,s=0;
		while(c!=n)
		{
			if(c%2==0)
			{
				if(v[i]>v[j])
				{
					d=d+v[i];
					i++;
				}
				else
				{
					d=d+v[j];
					j--;
				}
			}
			else
			{
				if(v[i]>v[j])
				{
					s=s+v[i];
					i++;
				}
				else
				{
					s=s+v[j];
					j--;
				}
			}
			c++;
		}
		cout<<d<<" "<<s<<endl;
	}
}