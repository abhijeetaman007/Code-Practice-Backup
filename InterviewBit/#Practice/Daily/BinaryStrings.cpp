#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int t=0;
	int c=0;
	int ans=0;
	deque<pair<int,int> > q;
	// pair<int,int> a;
	// a.first=0;
	// a.second=0;
	// q.push(a);
	for(int i=0;i<s.size();i++)
	{
		if(c==0)
		{
			cout<<"timeout"<<endl;
			t=0;
		}
		if(t==0)
		{
			if(s[i]=='0')
			{
				t=1;
				c=3;
				pair<int,int> a;
				
				cout<<"i is F "<<i<<endl;
				ans++;
			}
			// else	
		}
		else if(t==1)
		{
			if(s[i]=='1')
			{
				t=0;
				int f=0;
				int temp;
				if(f==0){
				 temp=3-c;
				 f=1;
				}
				// c=0;
				cout<<"i is "<<i<<endl;
				ans++;
			}
		}
		if(c!=0)
			c--;
		cout<<"final i "<<i<<endl;
		cout<<c<<endl;

	}
	cout<<c<<endl;
	cout<<ans<<endl;
	if(c==0)
		cout<<ans<<endl;
	else
		cout<<-1<<endl;
}