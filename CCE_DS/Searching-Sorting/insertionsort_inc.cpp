#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,j=0;
	int n;
	cin>>n;
	vector<int> v(n);
	for(i=0;i<n;i++)
		cin>>v[i];
	// for(i=1;i<n;i++)
	// {
	// 	int temp=v[i];
	// 	for(j=i;j>0&&temp<v[j-1];j--)
	// 		v[j]=v[j-1];
	// 	v[j]=temp;
	// }
	// int i, j;
	int temp;
	for (i=1; i<n; i++) {
	temp = v[i];
	for (j=i-1; j>=0 && temp<v[j]; j--)
		v[j+1] = v[j];
		v[j+1]=temp;
		}

	for(i=0;i<n;i++)
		cout<<v[i]<<" ";
}