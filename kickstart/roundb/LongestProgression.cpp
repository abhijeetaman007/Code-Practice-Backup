#include<bits/stdc++.h>
#define deb(x) cout << '>' << #x << " : " << x << endl;
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		vector<int> ans(n-1);
		for(int i=0;i<ans.size();i++)
		{
			ans[i]=v[i+1]-v[i];
		}
		int d=ans[0];
		int c=0;
		int a=1;
		int fin_ans=INT_MIN;
		deb(ans.size());
		int f=0;
		for(int i=0;i<ans.size();i++)
		{
			deb(i);
			deb(c);
			deb(f);
			deb(d);
			if(ans[i]==d && f==0)
			{
				a++;
				deb(ans[i]);
				deb(a);
			}
			else
			{
				if(c==0)
				{
					a++;
					c++;
					deb(ans[i]);
					deb(a);
					f=1;
				}
				else if(c==1)
				{
					deb(ans[i]+ans[i-1]);
					if(ans[i]+ans[i-1]==2*d)
					{
						a++;
						c++;
						deb(ans[i]);
						deb(a);
					}
					else
					{
						cout<<"in"<<endl;
						deb(ans[i]);
						deb(a);
						fin_ans=max(a,fin_ans);
						a=1;
						d=ans[i-1];
						i=i-2;
						c=0;			
					}
					f=0;
				}
				else 
				{
						cout<<"inside"<<endl;
						deb(ans[i]);
						deb(a);
						fin_ans=max(a,fin_ans);
						a=1;
						d=ans[i-1];
						i=i-2;
						c=0;
						f=0;
				}
			}
		}
			fin_ans=max(a,fin_ans);

		cout<<"checking revers"<<endl;
		int m1=fin_ans;
		reverse(ans.begin(),ans.end());
		 d=ans[0];
		 c=0;
		 a=1;
		 fin_ans=INT_MIN;
		deb(ans.size());
		 f=0;
		for(int i=0;i<ans.size();i++)
		{
			deb(i);
			deb(c);
			deb(f);
			deb(d);
			if(ans[i]==d && f==0)
			{
				a++;
				deb(ans[i]);
				deb(a);
			}
			else
			{
				if(c==0)
				{
					a++;
					c++;
					deb(ans[i]);
					deb(a);
					f=1;
				}
				else if(c==1)
				{
					deb(ans[i]+ans[i-1]);
					if(ans[i]+ans[i-1]==2*d)
					{
						a++;
						c++;
						deb(ans[i]);
						deb(a);
					}
					else
					{
						cout<<"in"<<endl;
						deb(ans[i]);
						deb(a);
						fin_ans=max(a,fin_ans);
						a=1;
						d=ans[i-1];
						i=i-2;
						c=0;			
					}
					f=0;
				}
				else 
				{
						cout<<"inside"<<endl;
						deb(ans[i]);
						deb(a);
						fin_ans=max(a,fin_ans);
						a=1;
						d=ans[i-1];
						i=i-2;
						c=0;
						f=0;
				}
			}
		}
			fin_ans=max(a,fin_ans);
			fin_ans=max(m1,fin_ans);	
			cout<<"Case #"<<k<<": "<<fin_ans<<endl;
	}	
}