#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	int x=0,a=0,b=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		x=x^v[i];
	}
	int y=1,pos;
	for(int i=0;i<32;i++)
	{
		
		cout<<x<<endl;
		cout<<y<<endl;
		if((x&y)>0)
		{
			pos=i;
			break;
		}
		y=y<<1;
	}
	cout<<x<<endl;
	cout<<"pos is "<<pos<<endl;
	y=1<<pos;
	cout<<y<<endl;
	for(int i=0;i<n;i++)
	{
		if((v[i]&y)>0)
		{
			cout<<"vi is "<<v[i]<<endl;
			a=a^v[i];
		}
		else
		{
			b=b^v[i];
		}
	}
	cout<<"Ans is "<<a<<" "<<b<<endl;	

}