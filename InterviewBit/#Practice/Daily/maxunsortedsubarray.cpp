#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n),v1(n);
	for(int i=0;i<n;i++)
		cin>>v1[i];
	v=v1;
	sort(v.begin(),v.end());
	int start=0;
	int end=n-1;
	for(int i=0;i<n;i++)
	{
		if(v[i]==v1[i])
			start=i+1;
		else
			break;
	}
	for(int i=n-1;i>=0;i--)
	{
		if(v[i]==v1[i]){

			end=i-1;
			cout<<end<<endl;
		}
		else
			break;
	}
	cout<<start<<end<<endl;
}