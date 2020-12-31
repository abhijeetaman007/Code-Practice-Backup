#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input1.txt", "r", stdin);
    // freopen("output1.txt", "w", stdout);
	// #endif

	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		long long int sum=a+b+c;
		if(sum%4!=0)
			cout<<"0"<<endl;
		else{
			int flag=0;
			while(1)
			{
				
				if(a<=0 || b<=0 || c<=0)
				{

					if(a==0 && b==0 && c==0)
					{
						flag=1;
						break;
					} 
					else{
						flag=0;
						break;
					}
				}
				int mx=max(a,max(b,c));

				if(a==mx)
				{
					a=a-2;
					b=b-1;
					c=c-1;
				}
				else if(b==mx)
				{
					b=b-2;
					a=a-1;
					c=c-1;
				}
				else if(c==mx)
				{
					c=c-2;
					a=a-1;
					b=b-1;
				}
			}
			if(flag==1)
				cout<<"1"<<endl;
			else		
				cout<<"0"<<endl;
		}
	}
}	