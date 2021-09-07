#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<< " " <<x<<endl;
int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<char> >v(m,vector<char> (n));
	vector<vector<char> >v1(n,vector<char> (m));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v[i][j]=='*')
			{
				int newi=j;
				int newj=m-1-i;
				v1[newi][newj]='*';
			}
			else
			{
				int newi=j;
				int newj=m-1-i;
				v1[newi][newj]='.';	
			}
		}
	}

	cout<<"Initial"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;


	int c=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			deb(i);
			deb(j);
			deb(c);
			if(j==n || v[i][j]=='*')
			{
				cout<<"in"<<endl;
				int newi=j;
				int newj=m-i-1;
				while(c--)
				{
					cout<<"inside"<<endl;
					newi--;
					deb(newi);
					deb(newj);
					v1[newi][newj]='#';
				}
				c=0;
			}
			else if(v[i][j]=='#')
			{
				c++;	
			}
		}
		cout<<"out"<<endl;
	}


	cout<<"final ans "<<endl;	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}

}
// 2 4 
// # . * .
// # # * .