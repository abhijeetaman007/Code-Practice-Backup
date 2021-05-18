#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m1;
	cin>>n>>m1;
	vector<int> v(m1);
	map<int,bool> m;
	for(int i=0;i<m1;i++)
	{
		cin>>v[i];
	}
	int ans=INT_MAX;
	for(int i=n-1;i>0;i--)
	{
		int c=0;
		int j=1;
		int x=0;
		int flag=1;
		for(int i=0;i<m1;i++)
		{	
			m[v[i]]=false;
		}
		while(c!=m1 && (flag==1||j!=1))
		{
			flag=0;
			if(m.find(j)!=m.end())
			{
				if(m[j]==false)
				{
					c++;
					m[j]=true;
				}
			}
			j=(j+i);
			if(j>n)
			{
				j=(j%n);
			}
			x++;
		}
		if(c==m1)
		ans=min(ans,x);
	}
	cout<<ans<<endl;
}