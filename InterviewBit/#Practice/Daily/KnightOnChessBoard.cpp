#include<bits/stdc++.h>
using namespace std;
vector<int> dirX={1,2,2,1,-1,-2,-2,-1};
vector<int> dirY={2,1,-1,-2,-2,-1,1,2};
class triplet
{
public:
	int a;
	int b;
	int c;
};
int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> >v(m,vector<int> (n,INT_MAX));

	int s1,s2,d1,d2;
	cin>>s1>>s2>>d1>>d2;

	queue<triplet> q;
	triplet x;
	x.a=s1-1;
	x.b=s2-1;
	x.c=0;
	v[s1-1][s2-1]=0;
	q.push(x);
	while(!q.empty())
	{
		triplet t=q.front();
		q.pop();
		// v[t.a][t.b]=min(v[t.a][t.b],t.c);                       //Dont do here
		for(int k=0;k<8;k++)
		{
			int i1=t.a+dirY[k];
			int j1=t.b+dirX[k];
			if(i1>=0 && i1<m && j1>=0 && j1<n)
			{
				if(v[i1][j1]==INT_MAX)
				{
					triplet temp;
					temp.a=i1;
					temp.b=j1;
					temp.c=t.c+1;
					v[temp.a][temp.b]=min(t.c+1,v[temp.a][temp.b]);   /// Doing here is better implementation prevents MLE because of queue
					q.push(temp);
				}
			}
		}
	}
	cout<<"Final ans "<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
	cout<<"cost"<<endl;
	cout<<v[d1-1][d2-1]<<endl;

}