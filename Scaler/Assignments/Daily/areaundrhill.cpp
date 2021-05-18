#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	long double area=0;
	area=0.5*(v[0]+v[v.size()-1]);
	for(int i=1;i<n;i++)
	{
		area=area+0.5*(v[i]+v[i-1]);
	}
	string s="\0";
	// s.push_back('t');
	// cout<<s<<endl;
	// area=7.5;
	area=floor(area);
	long long int ar=(long long int)(area);

	while(ar!=0)
	{
		int a=ar%(10);
		s=s+char(a+48);
		ar=ar/10;
	}
	reverse(s.begin(),s.end());	
	cout<<"Ans is "<<s<<endl;
}