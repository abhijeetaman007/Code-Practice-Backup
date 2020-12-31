#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	int player=1;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int flag=0;
	int f=0;
	for(int i=0;i<n-1;i++)
	{
		if(v[i]!=v[i+1])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		flag=1;
		player=player*(-1);
	}
	while(flag==0)
	{

		sort(v.begin(),v.end(),greater<int>());
		int m=v[n-1];
		int c=0;
		for(int i=0;i<n;i++){
			if(c==n/2)
				break;
			if(v[i]!=m){
				v[i]=m;
				c++;
			}
		}
		// cout<<"c is "<<c<<endl;
		// int tx;
		// cin>>tx;
		if(c!=n/2)
		{
			int j=0;
			c=n/2;
			while(c--)
			{
				v[j]--;
				j++;
			}

		}
		int t=0;
		for(int i=0;i<n-1;i++)
		{
			if(v[i]!=v[i+1]){
				t=1;
				break;
			}
		}
		// for(int i=0;i<n;i++)
			// cout<<v[i]<<" ";
		// cout<<endl;
		
		if(t==0)
			flag=1;
		if(flag==1)
			break;
		player=player*(-1);
	}	
	if(player==1)
		cout<<"Martha"<<endl;
	else
		cout<<"Stuart"<<endl;
}