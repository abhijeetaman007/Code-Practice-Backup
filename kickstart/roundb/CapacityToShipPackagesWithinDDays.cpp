#include<bits/stdc++.h>
using namespace std;
bool isValid(int l,int r,int mid,vector<int> &v,int d,int n)
{
	int j=0;
	vector<int> a(d,0);		
	for(int i=0;i<n;i++)
	{
		if(j<d)
		{
			if(a[j]+v[i]<=mid)
			{
				a[j]+=v[i];
			}
			else
			{
				j++;
				i--;
			}
		}
		else
		{
			return false;
		}
	}
	return true;	
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
	int l=INT_MIN,r=0;
	int d;
	cin>>d;
	if(d==n)
	{
		cout<<*max_element(v.begin(),v.end())<<endl;
	}
	else
	{
			cout<<"in"<<endl;
		int k=n-1;
		for(int i=0;i<d;i++)
		{
			l=max(l,v[k]);
			k--;
		}
		while(k>=0)
		{
			r=r+v[k];
			k--;
		}
		cout<<"r is "<<r<<endl;
		cout<<"l is "<<l<<endl;
		if(l>=r)
		{
			cout<<l<<endl;
		}
		else
		{
			cout<<"else"<<endl;
			// for(int val=l;val<=r;val++)
			// {
			// 	cout<<"val is "<<val<<endl;
			// 	int f=0;
			// 	int j=0;
			// 	vector<int> a(d,0);
			// 	for(int i=0;i<n;i++)
			// 	{
			// 		if(j<d)
			// 		{
			// 			if(a[j]+v[i]<=val)
			// 			{
			// 				a[j]+=v[i];
			// 			}
			// 			else
			// 			{
			// 				j++;
			// 				i--;
			// 			}
			// 		}
			// 		else
			// 		{
			// 			f=1;
			// 			break;
			// 		}
			// 	}
			// 	if(f==0)
			// 	{
			// 		cout<<"ans is "<<val<<endl;
			// 		break;
			// 	}
			// }
			int ans;
			int mid; 
			while(l<=r)
			{
				cout<<"l is "<<l<<endl;
				cout<<"r is "<<r<<endl;
				mid=(l+r)/2;
			 	cout<<"val is "<<mid<<endl;
				if(isValid(l,r,mid,v,d,n))
				{
					cout<<"left"<<endl;
					ans=mid;
					r=mid-1;
				}
				else
				{
					cout<<"right"<<endl;
					l=mid+1;
				}
			}
			cout<<"ans is"<<ans<<endl;
		}

	}
}