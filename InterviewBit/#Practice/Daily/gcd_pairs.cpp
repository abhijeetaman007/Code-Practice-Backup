#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int b;
	cin>>b;
	int m=*max_element(v.begin(),v.end());
	vector<int> freq(m+1,0);
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;

	for(int i=b+1;i<=m;i++)
	{
		for(int j=0;j<v.size();j++)
		{
			if(v[j]%i==0){
				freq[i]++;
				cout<<"freq is "<<i<<freq[i]<<endl;
			}
		}
	}
	for(int i=0;i<freq.size();i++)
		cout<<i<<'\t';
	cout<<endl;
	for(int i=0;i<freq.size();i++)
		cout<<freq[i]<<'\t';
	cout<<endl;
	long long int ans=0;
	for(int i=m;i>b;i--)
	{
		cout<<"inside for "<<i<<endl;
		if(freq[i]>=2)
		{
			long long int f=freq[i];
			cout<<"f is "<<f<<endl;
			ans=ans+(f*(f-1))/2;
			cout<<"ans is updated to "<<ans<<endl;
			// for(int j=1;j<i;j++)
		// {
			// if(i%j==0 && i!=j){
				// freq[j]=freq[j]-freq[i];
				// if(freq[i]>0)
				// {
				// 	f=freq[i];
				// 	ans=ans+(f*(f-1))/2;
				// }	
			// }
		// }	
		}
		
	}
	cout<<"Final ans"<<ans<<endl;
}