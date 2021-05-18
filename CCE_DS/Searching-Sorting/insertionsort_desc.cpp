#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j=0,i=0;
	for(i=1;i<n;i++)
	{
		int temp=a[i];
		for(j=i;j>0&&temp>a[j-1];j--)
		{
			// cout<<"Inside for"<<endl;
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}