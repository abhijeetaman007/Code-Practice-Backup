#include<bits/stdc++.h>
using namespace std;
int main()
{
	int max=0;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n-1;i++)
	{
		max=i;
		// cout<<"1"<<endl;
		for(int j=i;j<n;j++)
		{
			// cout<<"2"<<endl;
			if(v[max]<v[j])
				max=j;
		}
		swap(v[i],v[max]);
	}
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
}