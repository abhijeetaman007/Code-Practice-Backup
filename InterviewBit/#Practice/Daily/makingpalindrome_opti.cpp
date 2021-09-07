//Using Z-array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,str;
	cin>>s;
	str=s;
	int size=s.size();
	reverse(str.begin(),str.end());
	s=s+'$';
	s=s+str;
	cout<<"s is "<<s<<endl;
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
	int mx=1;
	for(int i=size+1;i<n;i++)
	{

		if(z[i]==n-i)
		{
			mx=z[i];
			break;
		}
	}
	cout<<mx<<endl;
	int ans=size-mx;
	cout<<"Ans is "<<ans<<endl;

}