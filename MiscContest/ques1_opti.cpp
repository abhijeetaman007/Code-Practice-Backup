#include<bits/stdc++.h>
using namespace std;
int main()
{
	// cout<<"opti"<<endl;
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		long long int sum=a+b+c;
		// i/f((a==1 && b==1&&c==2)||(a==1 && b==2&&c==1)||(a==2 && b==1&&c==1))
		// {
			// cout<<"1"<<endl;
			// continue;
		// }
		if(sum%4!=0){
			cout<<"0"<<endl;
		}
		else{
			int f=1;
			int mx=max(a,max(b,c));
			int mn=min(a,min(b,c));
			if(a==b && b==c && c==a)
			{
				if(a%4==0){
					cout<<"1"<<endl;
					f=0;
				}
			}
			else if((mx==a&&mx==b) ||(mx==b&&mx==c)||(mx==c&&mx==a))
			{
				cout<<"0"<<endl;
				f=0;
				// continue;
			}
			else if(mx%2==0)
			{
				if(a==mx)
				{
					if(b>mx/2)
					{
						cout<<"0"<<endl;
						// continue;
						f=0;
					}
					else if(c>mx/2)
					{
						cout<<"0"<<endl;
						// continue;
						f=0;	
					}
					else
						f=1;
				}
				else if(b==mx)
				{
					if(a>mx/2)
					{
						cout<<"0"<<endl;
						f=0;						
					}
					else if(c>mx/2)
					{
						cout<<"0"<<endl;
						f=0;
						
					}
					else
						f=1;
				}
				else if(c==mx)
				{
					if(b>mx/2)
					{
						cout<<"0"<<endl;
						f=0;
						
					}
					else if(a>mx/2)
					{
						cout<<"0"<<endl;
						f=0;
						
					}
					else
						f=1;
				}
			}
			if(f!=0){
			 if(a%2==0 && b%2==0 && c%2==0  && (mx-mn<=(mx/2)))
				cout<<"1"<<endl;
			else if(a%2==0 && b%2!=0 && c%2!=0 && (mx-mn<=(mx/2)))
				cout<<"1"<<endl;
				else if(b%2==0 && a%2!=0 && c%2!=0 && (mx-mn<=(mx/2)))
					cout<<"1"<<endl;
					else if(c%2==0 && b%2!=0 && a%2!=0 && (mx-mn<=(mx/2)) )
						cout<<"1"<<endl;
					else
						cout<<"0"<<endl;
			}
		}
	}
}