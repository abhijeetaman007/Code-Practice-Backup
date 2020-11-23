#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int max=10001;
	vector<int> v(max);
	v[0]=2;
	v[1]=3;
	v[2]=1;
	v[3]=5;
	v[4]=4;
	int c=3;
	int sq=1<<c;
	for(int i=5;i<max;i++)
	{
		if((i+1)==sq)
		{
			v[i]=i+2;
			i=i+1;
			v[i]=sq;
			c=c+1;
			sq=1<<c;
		}
		else
			v[i]=i+1;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(!(n&(n-1)))
		{
			cout<<-1<<endl;
			continue;
		}
		else
		{
			for(int i=0;i<n;i++)
				cout<<v[i]<<" ";
			cout<<endl;
		}
	}

}