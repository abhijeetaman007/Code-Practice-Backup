#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,b;
	cin>>m>>b;
	vector<int> v(m);
	for(int i=0;i<b;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a-1]+=1;
		v[b-1]+=1;
	}
	int f=0,c=0;
	for(int i=0;i<m;i++)
	{
		if(v[i]!=2){
			f=1;
		}
		if(v[i]>=3)
			c=c+1;
	}
	if(f==0){
		cout<<1<<endl;
	}
	else
	cout<<c/2<<endl;

}