//Making of z-array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	cout<<"n is "<<n<<endl;
	vector<int> z(n);
	for(int i=1;i<s.size();i++)
	{
		if(s[i]==s[0])
		{
			cout<<"inside "<<s[i]<<endl;
			int l=i;
			int r=l;
			int j=0;
			while(s[r]==s[j])
			{
				cout<<"while "<<s[j]<<endl;
				r++;
				j++;
			}
			r--;
			cout<<"i is "<<i<<endl;
			z[i]=r-l+1;
			cout<<"updated 1 "<<(r-l+1)<<endl;
			for(i=i+1;i<=r;i++)
			{
				if(z[i-l]<r-i+1){
					z[i]=z[i-l];
					cout<<"updated 2 "<<z[i-l]<<endl;
				}
				else
					break;
			}
			i--;
		}
	}
	for(int k=0;k<s.size();k++)
	{
		cout<<z[k]<<" ";
	}

}