#include<bits/stdc++.h>
using namespace std;
void func(int i,int n,int sum,int b,vector<int> &temp,vector<int> &v,set<vector<int> > &s)
{

}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int b;
	cin>>b;
	sort(v.begin(),v.end());
	set<vector<int> > s;
	vector<int> temp;
	func(0,n,0,b,temp,v,s);
	for(int i=0;i<n;i++)
}