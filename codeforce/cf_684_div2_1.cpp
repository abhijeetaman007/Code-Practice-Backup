#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,c1,h;
		string str;
		long long int zero=0,one=0;
		long long int sum=0;
		cin>>n>>c>>c1>>h;
		cin>>str;
		for(long long int i=0;i<n;i++)
		{
			if(str[i]=='0')
				zero++;
			else
				one++;
		}
		if(c==c1)
		{
			sum=c*(zero)+c1*(one);
			cout<<sum<<endl;
		}
		else
		{
			if(c1>c)
			{
				if(h+c<c1)
				{
					sum=n*c+h*one;
					cout<<sum<<endl;
				}
				else
				{
					sum=c*(zero)+c1*(one);
					cout<<sum<<endl;
				}
			}
			else
			{
				if(h+c1<c)
				{
					sum=n*c1+h*zero;
					cout<<sum<<endl;
				}
				else
				{
					sum=c*(zero)+c1*(one);
					cout<<sum<<endl;	
				}
			}
		}
	}
}