	#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;

void cyclegrid(vector<vector<int> >v,vector<vector<int> > &v1,int k,int m,int n,int layer)
{
	cout<<"Inside function"<<endl;
	deb(k);	
	int tl=layer,bl=m-1-layer,br=n-1-layer,tr=layer;
	deb(tl);
	deb(bl);
	deb(br);
	deb(tr);

	for(int irem=tl+1;irem<=bl;irem++)
	{
	
		cout<<"inside 1"<<endl;

		int jrem=tl;
		int i=irem;
		int j=jrem;
		int k1=k%(2*m+n-4);

		deb(irem);
		while(k1>0)
		{
			deb(j);
			if(j==tl)
			{
				if(i+k1<=bl)
				{
					i=i+k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					cout<<"else case"<<endl;
					k1=k1-(m-i);
					i=bl;
					j++;
				}
			}
			if(i==bl)
			{
				deb(j);
				// deb(k1);
				if(j+k1<=br)
				{
					j=j+k1;
					cout<<"assign"<<endl;
					v1[i][j]=v[irem][jrem];
					deb(i);
					deb(j);
					deb(v[i][j]);
					break;
				}
				else
				{
					k1=k1-(n-j);
					j=br;
					i++;
				}
			}
			if(j==br)
			{
				if(i-k1>=tr)
				{
					i=i-k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(m-i);
					i=tr;
					j--;
				}
			}
			if(i==tl)
			{
				if(j-k1>=tl)
				{
					j=j-k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(n-j);
					j=tl;
					i--;
				}
			}
		}	
		v1[i][j]=v[irem][jrem];
	}
	cout<<"outside 1"<<endl;
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[0].size();j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int jrem=tl+1;jrem<=br;jrem++)
	{
		cout<<"inside 2"<<endl;
		int irem=bl;
		int i=irem;
		int j=jrem;
		deb(irem);
		deb(jrem);

		int k1=k%(2*m+n-4);
		while(k1>0)
		{
			if(j==tl)
			{
				if(i+k1<=bl)
				{
					i=i+k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(m-i);
					i=bl;
					j++;
				}
			}
			if(i==bl)
			{
				if(j+k1<=br)
				{
					j=j+k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					cout<<"else case"<<endl;
					k1=k1-(n-j);
					j=br;
					i--;
				}
			}
			if(j==br)
			{
				deb(k1);
				deb(i);
				deb(j);
				if(i-k1>=tr)
				{
					i=i-k1;
					v1[i][j]=v[irem][jrem];
					deb(v1[i][j]);
					break;
				}
				else
				{
					k1=k1-(m-i);
					i=tr;
					j--;
				}
			}
			if(i==tl)
			{
				if(j-k1>=tl)
				{
					j=j-k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(n-j);
					j=tl;
					i--;
				}
			}
		}	
		v1[i][j]=v[irem][jrem];	
	}
	cout<<"outside 2"<<endl;
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[0].size();j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
	deb(br);
	for(int irem=bl-1;irem>=tr;irem--)
	{
		cout<<"inside 3"<<endl;
		
		int jrem=br;
		int i=irem;
		int j=jrem;
		int k1=k%(2*m+n-4);deb(irem);
		deb(jrem);
		while(k1>0)
		{
			cout<<"inside while"<<endl;
			if(j==tl)
			{
				if(i+k1<=bl)
				{
					i=i+k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(m-i);
					i=bl;
					j++;
				}
			}
			if(i==bl)
			{
				if(j+k1<=br)
				{
					j=j+k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(n-j);
					j=br;
					i++;
				}
			}
			if(j==br)
			{
				if(i-k1>=tr)
				{
					i=i-k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(m-i);
					i=tr;
					j--;
				}
			}
			if(i==tl)
			{
				if(j-k1>=tl)
				{
					j=j-k1;
					v1[i][j]=v[irem][jrem];
					cout<<"req"<<endl;
					break;
				}
				else
				{
					k1=k1-(n-j);
					j=tl;
					i--;
				}
			}
		}	
		v1[i][j]=v[irem][jrem];		
	}
	cout<<"outside 3"<<endl;
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[0].size();j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
	deb(br);
	deb(tl);
	for(int jrem=br-1;jrem>=tl;jrem--)
	{
		cout<<"inside 4"<<endl;

		int irem=tl;
		
		int i=irem;
		int j=jrem;
		int k1=k%(2*m+n-4);deb(irem);
		deb(jrem);
		while(k1>0)
		{
			if(j==tl)
			{
				if(i+k1<=bl)
				{
					i=i+k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(m-i);
					i=bl;
					j++;
				}
			}
			if(i==bl)
			{
				if(j+k1<=br)
				{
					j=j+k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(n-j);
					j=br;
					i++;	
				}
			}
			if(j==br)
			{
				if(i-k1>=tr)
				{
					i=i-k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(m-i);
					i=tr;
					j--;
				}
			}
			if(i==tl)
			{
				if(j-k1>=tl)
				{
					j=j-k1;
					v1[i][j]=v[irem][jrem];
					break;
				}
				else
				{
					k1=k1-(n-j);
					j=tl;
					i--;
				}
			}
		}	
		v1[i][j]=v[irem][jrem];
	}
	cout<<"outside 4"<<endl;
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[0].size();j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	int k;
	cin>>k;
	int m,n;
	cin>>m>>n;
	vector<vector<int> >v(m,vector<int>(n));
	vector<vector<int> >v1(m,vector<int>(n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	int layer=min(m/2,n/2);
	for(int i=0;i<layer;i++)
	{
		cyclegrid(v,v1,k,m,n,i);	
	}


	cout<<"Final Array "<<endl;
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[0].size();j++)
		{
			cout<<v1[i][j]<<" ";
		}
		cout<<endl;
	}
}