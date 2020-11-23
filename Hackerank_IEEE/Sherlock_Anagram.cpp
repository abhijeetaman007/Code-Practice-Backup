#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		int count=0;
		for(int k=0;k<s.size();k++)
		{
			int v[n-k][26]={0};
			int j=0;
			int c=0;
			if(k==0)
			{
				for(int i=k;i<s.size();i=i+1)
				{
				while(j<=i)
				{
					int a=s[j]-'a';
					v[c][a]=v[c][a]+1;
					j=j+1;
				}
					c=c+1;
				}

			}
			else
			{
				for(int i=k;i<s.size();i=i+1)
			{
				// cout<<" i is"<<i<<endl;
				int x=j;
				while(j<=i)
				{
					// cout<<" j is"<<j<<endl;
					int a=s[j]-'a';
					// cout<<"a is"<<a<<endl;
					v[c][a]=v[c][a]+1;
					j=j+1;
				}
				c=c+1;
				// j=j-1;
				j=x+1;

				// cout<<"updated c is"<<c<<endl;
			}

			}
			for(int l=0;l<n-k;l++)
				{
					for(int m=l+1;m<n-k;m++)
					{
						int d=0;						
						for(int b=0;b<26;b++)
						{
							// //cout<<"v["<<l<<"]["<<b<<"] is "<<v[l][b]<<" "<<"v["<<m<<"]["<<b<<"] is "<<v[m][b]<<endl;
							if(v[l][b]==v[m][b])
							{
								d=d+1;
								//// cout<<"d is updated and d is"<<d<<endl;
							}
							
						}

						if(d==26)
						{
							count=count+1;
							//// cout<<"Count is updated  and is "<<count<<endl;
						}	
					}					
				}	


			
		}
		
		cout<<count<<endl;
		
	}
}