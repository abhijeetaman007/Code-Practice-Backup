#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
void func(int i,int n,vector<int> &temp,vector<int> &v,int sum,int &ans,int b)
{
	// deb(i);
	// deb(sum);
	// deb(temp.size());
	if(i==n)
	{
		if(sum<=1000 && temp.size()==b){
			ans++;
			// cout<<"values are :"<<endl;
			// for(int i=0;i<temp.size();i++)
				// cout<<temp[i]<<" ";
			// cout<<endl;
			// cout<<"ans++"<<endl;
		}
		return;
	}
	// if(temp.empty())
	// {
	// 	temp.push_back(i);
	// 	func(i+1,n,temp,v,sum+v[i],ans,b);
	// 	temp.pop_back();
	// }
	// else if(i-temp[temp.size()-1]>=1)
	// {
	// 	// cout<<"in"<<endl;
	// 	temp.push_back(i);
	// 	func(i+1,n,temp,v,sum+v[i],ans,b);
	// 	temp.pop_back();		
	// }
		temp.push_back(i);
		func(i+1,n,temp,v,sum+v[i],ans,b);
		temp.pop_back();

	func(i+1,n,temp,v,sum,ans,b);
}


int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int b;
	cin>>b;
	vector<int>temp;
	int ans=0;
	func(0,n,temp,v,0,ans,b);
	cout<<"final ans "<<ans<<endl;
}