#include<bits/stdc++.h>
using namespace std;
int main()
{

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// #ifndef ONLINE_JUDGE/
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	// #endif

	int t;
	cin>>t;
	while(t--)
	{
		int n,k,ans=0;
		cin>>n>>k;
		vector<int> v(n);
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
		}
		if(sum<2*k)
			cout<<-1<<endl;
		else
		{
			sort(v.begin(),v.end(),greater<int>());
			int i=0;
			int j=0;
			int s1=0,s2=0;
			while(i<n)
			{
				s1=s1+v[i];
				ans++;
				// cout<<"s1 is "<<s1<<endl;				
				if(s1>=k)
					break;
				else
				{
					int temp=i+1;
					int f=0;
					for(j=i+1;j<n;j++)
					{
						// cout<<"for 1"<<" v[j] is "<<v[j]<<endl;
						// cout<<"k-s[1] "<<k-s1<<endl;
						if(v[j]>=k-s1)
						{	
							// if(v[j]<v[i+1]){
								f=1;
								temp=j;	
							// }
							// f=1;
							// cout<<"f is 1"<<endl;
							// temp=j;
						}
					}

					if(f==0)
					{
						for(j=i+1;j<n;j++)
						{
							if(v[j]<k-s1)
							{
								// if(v[j]<v[i+1])
								temp=j;
							}
						}

					}
					swap(v[temp],v[i+1]);
					// cout<<"v is "<<v[i+1]<<endl;
				}
				i++;
			}
			i++;
			// ans=i;
			// int temp=i;
			while(i<n)
			{
				int temp;

				s2=s2+v[i];
				ans++;
				// cout<<"s2 is "<<s1<<endl;				
				if(s2>=k){
					break;
				}
				else
				{
					int f=0;
					temp=i+1;
					for(j=i+1;j<n;j++)
					{
						if(v[j]>=k-s2)
						{
							// if(v[j]<v[i+1])
							// {
								f=1;
								temp=j;
							// }
						}
					}
					if(f!=1)
					{
						temp=i+1;
						for(j=i+1;j<n;j++)
						{
							if(v[j]<k-s2)
							{
								// if(v[j]<v[i+1])
								temp=j;
							}
						}
					}
					swap(v[temp],v[i+1]);
				}
				i++;
			}
			// cout<<endl;
			// cout<<"s1 is "<<s1<<" s2 is "<<s2<<endl;
			if(s1<k || s2<k)
				cout<<-1<<endl;
			else
				cout<<ans<<endl;

		}
	}
}