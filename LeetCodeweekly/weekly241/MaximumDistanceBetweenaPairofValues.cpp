#include<bits/stdc++.h>
using namespace std;
int floor(int l,int r,vector<int> &v,int key)
{
	int ans=INT_MIN;
	while(l<=r)
	{
		cout<<"key is "<<key<<endl;
		cout<<"l is "<<l<<endl;
		cout<<"r is "<<r<<endl;
		int mid=(l+r)/2;
		cout<<"mid is "<<mid<<endl;
		if(v[mid]<=key)
		{
			ans=mid;
			r=mid-1;
		}
		else
		{
			l=mid+1;			
		}
	}
	cout<<"out "<<ans<<endl;
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int m;
		cin>>m;
		vector<int> v1(n);
		vector<int> v2(m);

		for(int i=0;i<n;i++)
			cin>>v1[i];
		for(int i=0;i<m;i++)
			cin>>v2[i];
		int ans=INT_MIN;
		for(int i=m-1;i>=0;i--)
		{
			cout<<"IN"<<endl;
			int idx=floor(0,n-1,v1,v2[i]);
			if(idx==INT_MIN)
				continue;
			ans=max(ans,i-idx);
		}
		ans=max(ans,0);
		cout<<ans<<endl;
	}
}