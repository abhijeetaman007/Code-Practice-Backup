#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	if(n%2!=0)
		n=n-1;
	for(int i=0;i<n;i=i+2)
	{
		swap(v[i],v[i+1]);
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}
