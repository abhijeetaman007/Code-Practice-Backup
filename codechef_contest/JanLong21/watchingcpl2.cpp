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
		int n,k;
		cin>>n>>k;
		long long int sum=0;
		vector<int> v(n),a;
		vector<bool> flag(n,false);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			sum+=v[i];
		}
		if(sum<2*k)
		{
			cout<<-1<<endl;
			continue;	
		}
		long long int s=0;
		sort(v.begin(),v.end(),greater<int>());
		for(int i=0;i<n;i++)
		{
			if(s>=k)
				break;
			if(s<k){
			  a.push_back(i);
			  flag[i]=true;
			  s+=v[i];
			}
		}
		int j=0;

		// int d=s-k;
		// cout<<"initial a is "<<endl;
		// for(int i=0;i<a.size();i++)
			// cout<<v[a[i]]<<" ";
		// cout<<endl;


		while(s!=k && j<a.size())
		{
			for(int i=0;i<n;i++)
			{
				if(!flag[i])
				{
					if(s-v[a[j]]+v[i]<s && s-v[a[j]]+v[i]>=k)
					{
						s=s-v[a[j]]+v[i];
						flag[a[j]]=false;
						flag[i]=true;
						a[j]=i;
						if(s==k)
							break;
					}
				}
			}
			j++;
		}


		
		long long int s1=0;
		for(int i=0;i<n;i++)
		{
			if(!flag[i])
			{
				if(s1<k)
				{
					s1=s1+v[i];
					flag[i]=true;
				}
			}
		}

		// cout<<"s is "<<s<<" s1 is  "<<s1<<endl;
		// cout<<"a is "<<endl;
		// for(int i=0;i<a.size();i++)
			// cout<<v[a[i]]<<" ";
		// cout<<endl;

		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(flag[i]){
				// cout<<v[i]<<" ";
				ans++;
			}
		}
		// cout<<endl;
		if(s1<k || s<k)
			ans=-1;
		cout<<ans<<endl;
	}
}