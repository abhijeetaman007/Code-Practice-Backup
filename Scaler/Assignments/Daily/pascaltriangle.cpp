#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > solve(int k) {
	// k=k-1;
	k=k+2;
	vector<vector<int> >v(k);
		int flag=1;
		for(int i=0;i<k;i++)
		{
			if(flag==0)
			{
					 int x=-1;
			   		 int y=0;
				for(int j=0;j<=i;j++)
				{
			         int sum=0;
					if(x>=0 && x<i )
					{
						sum=sum+v[i-1][x];
					}
					if(y>=0 && y<i)
					{
						sum=sum+v[i-1][y];
					}
					v[i].push_back(sum);
					// cout<<"Sum is "<<sum<<endl;
					// cout<<" i is "<<i<<endl;
					x=x+1;
					y=y+1;
				}	
			}
			else
			{
				v[0].push_back(1);
				flag=0;
			}	
		}
		return v;
	}
int main()
{
	int k;
	cin>>k;
	vector<vector<int> >v(k);
	v=solve(k);
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}	
}

// 1
// 11
// 121
// 1331
// 14641


// 11
