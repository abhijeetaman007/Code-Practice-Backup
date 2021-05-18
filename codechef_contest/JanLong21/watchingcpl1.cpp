#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> v(n);
		vector<bool> flag(n,false);	
		long long int s=0;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			s=s+v[i];
		}
		if(s<2*k){
			cout<<-1<<endl;
			continue;
		}
		sort(v.begin(),v.end(),greater<int>());
		int a=0,x;
		int y=n;
		for(int i=0;i<n;i++)
		{
			cout<<"present "<<v[i]<<endl;
			if(y==0)
				break;
			if(flag[i])
				continue;
			if(a==k)
				break;
			if(a<k){
				a=a+v[i];
				cout<<"a is updated "<<a<<endl;				
				flag[i]=true;
				y--;
				if(a>k){
					cout<<"x is updated"<<endl;
					x=i;
				}
			}
			else
			{
				if(v[x]>v[i] && a-v[x]+	v[i]>=k)
				{
					cout<<"found smaller"<<endl;
					a=a-v[x]+v[i];
					cout<<"new a is "<<a<<endl;
					flag[i]=true;
					flag[x]=false;
					x=i;	
				}
			}
		}
		cout<<"element used in a "<<endl;
		for(int i=0;i<n;i++)
		{
			if(flag[i])
			{
				cout<<v[i]<<" ";
			}
		}
		cout<<endl;
		int b=0;
		for(int i=0;i<n;i++)
		{
			if(y==0)
				break;
			if(flag[i])
				continue;
			if(b>=k)
				break;
			if(b<k){
				b=b+v[i];
				flag[i]=true;
				y--;
			}			
		}
		int ans=0;
		if(b<k || a<k)
			ans=-1;
		else
		{
			for(int i=0;i<n;i++)
			{
				if(flag[i])
					ans++;
			}
		}
		cout<<"a is "<<a<<" b is "<<b<<endl;
		cout<<ans<<endl;
	}
}

// 50
// 8           
// 29
// 18 13 11 8 9 5 12 15
// element used in a 
// 18 13 
// a is 31 b is 33
// 6

