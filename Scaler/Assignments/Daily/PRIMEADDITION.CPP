//Soln: Any even numbers can be written as sum of two prime numbers except 2 which just reqire 1 prime which is 2 itself
//Given Below is genral approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	vector<bool> v(n+1,true);
	v.at(0)=false;
	v.at(1)=false;	
	for(long long int i=2;i<=n;i++)
	{
		if(v[i]==true)
		{
			for(long long int j=2;i*j<=n;j++)
			{
				v[i*j]=false;
			}	
		}
	}
	cout<<"test1"<<endl;
	for(int i=0;i<=n;i++)
		if(v[i])
			cout<<i<<" ";
	cout<<"test2"<<endl;
	int a=n,b=n;
	int count=0;
	// int x=n;
	cout<<"test3"<<endl;
	int pos,x;
	while(a!=0)
	{
		cout<<"inside";
		for(int i=b;i>1;i--)
		{
			if(v[i]==true)
			{
				
				a=a-i;
				cout<<"i and a "<<i<<" "<<a<<endl;
				// cin>>x;
				count=count+1;
				pos=i;
				b=a;
				break;		
			}
			if(a==0)
			break;
		}
		if(a==1)
		{
			count=0;
			a=n;
			b=pos-1;
		}
	}
	cout<<"Ans is"<<count;
}


}