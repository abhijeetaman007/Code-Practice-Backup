#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<endl;
int main()
{
	// int m,n;
	// cin>>m>>n;
	// vector<vector<int> >v(m,vector<int> (n));
	// for(int i=0;i<m;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 		cin>>v[i][j];
	// }
	// int layer=min(m/2,n/2);
	// int k;
	// cin>>k;
	string w;
	cin>>w;
	int c=0;
	for(int i=0;i<w.size();i++)
	{
		map<char,int> m;
		for(int j=0;j<w.size();j++)
		{
			if(m[s[i+j]]==m.end())
			{
				c++;
				m[s[i+j]]++;
			}
			else
			{
				if(m[s[i+j]]==1)
				{
					c++;
					m[s[i+j]]++;
				}
				else
				{
					break;
				}
			}
		}
	}
	cout<<c<<endl;

}