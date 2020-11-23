// https://codeforces.com/contest/1366/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,count=0;
		cin>>a>>b;
		if(max(a,b)!=a)
			swap(a,b);
		if(a>2*b){
		a=2*b;
		}
		
		while(1)
		{
			if(a!=0 && b!=0)
			{
				if(a!=1 || b!=1)
				{
					if(a==b)
					{
						long long int x=a/3;
						long long int rem=a-x*3;
						if(rem==0)
						{
							count=count+2*(a/3);
							break;
						}
						if(rem==1)
						{
							count=count+2*((a-1)/3);
							break;
						}
						if(rem==2)
						{
							count=count+2*((a-2)/3)+1;
							break;	
						}
					}
					 else 
					{
						if(a==2*b)
						{
							count=count+(b);
							break;
						}
						else
						{
							int d=a-b;
							count=count+d;
							b=b-d;
							a=b;	
						}			
					}
				}
				else
				break;
			}
			else
			break;
		}
		cout<<count<<endl;
	}
}