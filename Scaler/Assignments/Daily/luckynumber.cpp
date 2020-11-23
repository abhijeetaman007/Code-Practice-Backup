#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	int n=50000;
	vector<bool> prime(n+1,true);
	vector<int> spf(n+1);
	prime.at(0)=false;
	prime.at(1)=false;
	spf.at(0)=0;
	spf.at(1)=1;  
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			spf[i]=i;
			for(int j=2;i*j<=n;j++)
			{
				if(prime[i*j])
				 spf[i*j]=i;					
				prime[i*j]=false;
			}
		}
	}
	vector<bool> lucky(n+1,false);
	for(int i=6;i<=50000;i++)
	{
		cout<<"test"<<endl;
		int num=i;
		int c=0,t=-1;
		while(num>1)
		{
			cout<<"num is "<<num<<endl;
			// cin>>x;

			a=spf[num];
			cout<<"a is "<<a<<endl;
			if(t!=a)
				c+=1;
			// if(c>2)
			// 	break;
			// cout<<a<<endl;
			
			t=a;
			cout<<"t is "<<t<<endl;
			num=num/a;
		}
		if(c==2)
		{
			cout<<"i is T"<<endl;
			lucky[i]=true;
		}
	}
	cin>>a;
	int ans=0;
	if(a<6)
		cout<<0<<endl;
	else
		{	for(int i=6;i<=a;i++)
			{
				if(lucky[i])
					ans++;
			}
			cout<<"Ans is "<<ans<<endl;
		}	

}