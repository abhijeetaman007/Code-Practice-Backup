#include<bits/stdc++.h>
using namespace std;
int main()
{
	    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int i=0;
		// int c=0;
		while(i<n-1 && x--)
		{
			int j;
			int p=(int)log2(a[i]);
			int f=0;
			long long int z=pow(2,p);
			for(j=i+1;j<n;j++)
			{
				int temp=a[j]^z;
				if(temp<a[j])
				{
					f=1;
					a[j]=a[j]^z;
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
		// cout<<"x is "<<x<<endl;
		if(x%2!=0)
		{
			// int p=(int)log2(min(a[a.size()-1],a[a.size()-1]));
			// long long int z=pow(2,p);
			// // long long int z=1LL << p;
			// a[a.size()-1]=a[a.size()-1]^z;
			// a[a.size()-2]=a[a.size()-2]^z;
			i=a.size();
			int p = (int)(log2(min(a[i-1], a[i-2])));
            a[i-1]^= 1LL << p;
            a[i-2]^= 1LL << p;
		}
		// cout<<"final is "<<endl;
			for(i=0;i<n;i++)
	    	  cout<<a[i]<<" ";
    	      cout<<endl;	
	}

}