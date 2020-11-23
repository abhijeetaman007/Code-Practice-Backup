#include<bits/stdc++.h>
using namespace std;
int main()
{	
		int l,r,t;
		cin>>t;
		while(t--)
		{
			cin>>l>>r;
		if((2*l)<=r)
			cout<<l<<" "<<2*l<<endl;
		else
			cout<<-1<<" "<<-1<<endl;	
		}
		
}