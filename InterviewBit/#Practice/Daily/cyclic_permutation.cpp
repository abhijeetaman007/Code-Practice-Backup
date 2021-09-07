#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s,t,p;
	int l=0;
	int r=0;
	int j;
	cin>>p>>t;
	t=t+t;
	s=p+'$';
	s=s+t;
	cout<<"s is "<<s<<endl;	
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
			j=i-l;
			if(z[j]<r-i+1)
			{
				z[i]=z[j];
			}
			else
			{
				cout<<" else "<<i<<endl;
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
		cout<<z[i]<<" ";
		if(z[i]==x)
			c++;
	}
	cout<<endl;
	cout<<c<<endl;
	//return c;
}