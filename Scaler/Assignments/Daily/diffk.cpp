#include<bits/stdc++.h>
using namespace std;
int main()
{
	    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	int i=0;
	int j=1;
	int count=0;
	sort(v.begin(),v.end());

	while(j<n )
	{
		// cout<<"inside"<<endl;
		while(v[j+1]==v[j] && j+1<n)
		{
			j++;
		}
		while(v[i+1]==v[i] && j+1<n)
		{
			i++;
		}
		if(v[j]-v[i]==k)
		{
			cout<<v[j]<<" "<<v[i]<<endl;
			if(j!=i)
			count++;
		}
		if(v[j]-v[i]<=k)
		{
			j=j+1;
		}
		else
			i=i+1;
	}	
	cout<<count<<endl;
}