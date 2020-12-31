#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int num1,num2;
		cin>>num1>>num2;
		pair<long long int,long long int> p1,p2;
		long long int ans=0,odd=0,even=0;
		p1.first=p1.second=num1/2;
		if(num1%2!=0)
			p1.first++;
		p2.second=p2.first=num2/2;
		if(num2%2!=0)
			p2.first++;
		odd=p1.first*p2.first;
		even=p1.second*p2.second;
		ans=odd+even;
		cout<<ans<<endl;
	}
}