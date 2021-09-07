#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int c=0;
	int max=-1;
	for(int i=0;i<n;i++)
	{
		if(max<v[i])
			max=v[i];
		if(max==i)
			c++;
	}
	 cout<<c;
}