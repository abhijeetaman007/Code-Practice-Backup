#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	vector<int> v(n);
	vector<bool> kill(n,false);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=1;i<n;i++)
	{
		int x=i-v[i];
			if(i>=0){
				for(int j=0;j<i;j++)
				{
					if(kill[j]==false){
						if(j>=x)
						kill[j]=true;
					}
				}
			}
	}
	long long int ans=0;
	for(int i=0;i<n;i++)
	{
		if(kill[i]==false)
		{
			ans=ans+1;
		}
	}		
	cout<<ans<<endl;

}