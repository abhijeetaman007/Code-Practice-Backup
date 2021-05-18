#include<bits/stdc++.h>
using namespace std;
void func(int i,int n,vector<int> &v,vector<int> &temp,set<vector<int> >&s,int sum,int b)
{
	if(i==n)
	{
		if(sum==b){
			cout<<"sum is "<<sum<<endl;
			cout<<"got it"<<endl;
			for(int j=0;j<temp.size();j++)
			{
				cout<<temp[j]<<" ";
			}
			cout<<endl;
			s.insert(temp);
		}
		return;
	}
	func(i+1,n,v,temp,s,sum,b);
	temp.push_back(v[i]);
	func(i+1,n,v,temp,s,sum+v[i],b);
	temp.pop_back();
}


int main()
{
	int n;
	cin>>n;
	int b;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cin>>b;
	sort(v.begin(),v.end());
	vector<int> temp;
	vector< vector<int> > ans;
	set<vector<int> >s;
	func(0,n,v,temp,s,0,b);
	for(auto itr=s.begin();itr!=s.end();itr++)
	{
		ans.push_back(*itr);
	}
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<< " ";
		}
		cout<<endl;
	}
}