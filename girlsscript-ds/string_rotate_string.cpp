#include<bits/stdc++.h>
using namespace std;
int main()
{
	int temp;
	cin>>temp;
	while(temp--){
	string a,b,t1,t2,t,T;
	cin>>a>>b;
	t1=t1+a[0];
	t1=t1+a[1];
	//cout<<a[0]<<" "<<a[1]<<endl;
	//cout<<t1<<endl;
	int l=a.size();
	t2+=a[l-2];
	t2+=a[l-1];
	//cout<<t2<<endl;
	for(int i=2;i<a.size();i++)
	{
		t=t+a[i];
	}
	//cout<<t<<endl;
	t=t+t1;
	//cout<<t<<endl;
	if(t==b)
	{
		cout<<1<<endl;
		continue;
	}
	T=T+t2;
	//cout<<T<<endl;
	for(int i=0;i<a.size()-2;i++)
	{
		T=T+a[i];
	}
	//cout<<T<<endl;
	if(T==b)
	{
		cout<<1<<endl;
		continue;
	}
	cout<<0<<endl;
	}
}