#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="bababaa$aababab";
	// cin>>s;
	int n=s.size();
	std::vector<int> z(n);
	int l=0,r=0;
	for(int i=1;i<n;i++)
	{
		if(i>r)
		{
			l=r=i;
			while(r<n && s[r-l]==s[r])
				r++;
			r--;
			z[i]=r-l+1;
		}
		else
		{
			if(z[i-l]<r-i+1)
			{
				z[i]=z[i-l];
			}
			else
			{
				l=i;
				while(r<n && s[r-l]==s[r])
					r++;
				r--;
				z[i]=r-l+1;
			}			
		}
	}
	for(int i=0;i<n;i++)
		cout<<z[i]<<" ";
}