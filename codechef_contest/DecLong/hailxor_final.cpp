#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,x;
		cin>>n>>x;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int i=0;
		while(i<n-1 && x--)
		{
			long long int j;
			int p=(int)log2(a[i]);
			long long int f=0;
			long long int z=pow(2,p);
			for(j=i+1;j<n;j++)
			{
				int temp=a[j]^z;
				if(temp<a[j])
				{
					f=1;
					a[j]=temp;
					break;
				}
			}
			if(f!=1)
			{
				a[a.size()-1]=a[a.size()-1]^z;
			}
			a[i]=a[i]^z;

			while(a[i]==0)
				i++;
			// for(int k=0;k<n;k++)
			// cout<<a[k]<<" ";
			// cout<<endl;
		}
		if(x%2!=0 && n==2)
		{
			a[a.size()-1]=a[a.size()-1]^1;
			a[a.size()-2]=a[a.size()-2]^1;

		}
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}

}