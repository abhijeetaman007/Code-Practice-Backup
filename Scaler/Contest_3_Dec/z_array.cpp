#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	std::vector<int> z(n);
	int l=0,r=0;
	for(int i=1;i<n;i++)
	{
		if(i>r)  //when creating a z-box
		{
			l=r=i;
			while(r<n && s[r-l]==s[r])
				r++;
			r--;
			z[i]=r-l+1;
		}
		else
		{
			if(z[i-l]<r-i+1)   //when using values of z-box
			{
				z[i]=z[i-l];
			}
			else
			{
				l=i;
				while(r<n && s[r-l]==s[r]) //resizing z-box
					r++;
				r--;
				z[i]=r-l+1;
			}			
		}
	}
	for(int i=0;i<n;i++)
		cout<<z[i]<<" ";
}