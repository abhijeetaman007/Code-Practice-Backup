#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	int i=0;
	int j=n-1;
	int count=0;
	while(i<j)
	{
		if((long long int)((long long int)v[i]+v[j])==k)
		{
			count++;
		}
		if((long long int)((long long int)v[i]+v[j])>=k)
			j--;	
		else
			i++;
	}
	cout<<"Ans is "<<count<<endl;
}