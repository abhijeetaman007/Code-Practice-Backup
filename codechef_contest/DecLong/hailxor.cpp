#include<bits/stdc++.h>
using namespace std;
int main()
{
	    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		vector<int> a(n),b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		// int y=min(x,n);
		int i=0;
		b=a;
		// cout<<"y is "<<y<<endl;
		int c=0;
		while(i<n-1 && x--)
		{
			c++;
			// cout<<"c is "<<c<<endl;
			int j;
			int p=(int)log2(a[i]);
			// cout<<"p is "<<p<<endl;
			int f=0;
			long long int z=pow(2,p);
			// cout<<"z is "<<z<<endl;
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

			// if(i==n-3)
			// {
			// 	cout<<"there is change"<<endl;
			//     b=a;
			// }

			while(a[i]==0)
				i++;
			// cout<<"i is "<<i<<endl;
		// for(int k=0;k<n;k++)
		// cout<<a[k]<<" ";
		// cout<<endl;			

		}
		// cout<<"final is "<<endl;
		// for(i=0;i<n;i++)
		// 	cout<<a[i]<<" ";
		// cout<<endl;
		if(x<=n)
		{
            for(i=0;i<n;i++)
	    	  cout<<a[i]<<" ";
    	      cout<<endl;
		}
		else
		{
			if((c%2==0 && x%2==0)||(c%2!=0 && x%2!=0))
			{
				for(i=0;i<n;i++)
	    	  cout<<a[i]<<" ";
    	      cout<<endl;
			}
			else{

				long long int z=(int)log2(a[a.size()-1]);
			z=pow(2,z);
             a[a.size()-1]=a[a.size()-1]^z;
             a[a.size()-2]=a[a.size()-2]^z;
         		for(i=0;i<n;i++)
	    	  cout<<a[i]<<" ";
    	      cout<<endl;    
			}
			
		    
		}
	}

}