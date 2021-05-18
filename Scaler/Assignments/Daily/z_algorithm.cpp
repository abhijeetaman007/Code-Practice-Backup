#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,p;
	cin>>p>>t;
	int l=0;
	int r=0;
	int j;
	s=t+p;
	int n=s.size();
	vector<int> z(n);
	int x=p.size();
	for(int i=1;i<n;i++)
	{
		if(i>r)
		{
			l=r=i;
			while(r<n && s[r-l]==s[r])
			{
				r++;
			}
			r--;
			z[i]=r-l+1;
		}
		else
		{
			j=r-l;
			if(z[j]<r-i+1)
			{
				z[i]=z[j];
			}
			else
			{
				l=i;
				while(r<n && s[r-l]==s[r])
				{
					r++;
				}
				r--;
				z[i]=r-l+1;
			}
		}
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(z[i]>=x)
			c++;
	}
	cout<<"ans is "<<c<<endl;
}