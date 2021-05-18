#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	vector<int> v;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}

	sort(v.begin(),v.end());
	int d=v[1]-v[0];
	int flag=0;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]-v[i-1]==d)
			continue;
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"NO"<<endl;
	if(flag==0)
		cout<<"YES"<<endl;
}