#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int j,int k,string s)
{
	int n=(k-j)+1;
	while(n--)
	{
		if(s[j]!=s[k])
		{
			return false;
		}
		j++;
		k--;

	}
	return true;
}
int main()
{
	string s,ans;
	cin>>s;
	int n=s.size();
	int flag=0;
	for(int i=n-1;i>=0;i--)
	{
		// cout<<"i is "<<i<<endl;
		int j=0;
		int k=i;
		while(k<n)
		{
			// cout<<"k is "<<k<<" j is "<<j<<endl;			
			// string sub=s.substr(j,k+1);
			// cout<<sub<<endl;
			if(isPalindrome(j,k,s))
			{
				// cout<<"inside"<<endl;
				string sub="\0";
				for(int l=j;l<=k;l++)
				sub=sub+s[l];
				ans=sub;
				flag=1;
				break;
			}
			j++;
			k++;
		}
				if(flag==1)
				break;

	}
	cout<<ans<<endl;
	// return ans;
}