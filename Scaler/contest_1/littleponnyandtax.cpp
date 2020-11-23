#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b)
{
    return ((double)a.first/(double)a.second)<((double)b.first/(double)b.second);
}

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n-1-i;j++)
	// 	{
	// 		// if(a[j]>a[j+1])
	// 		// 	{
	// 		// 		swap(a[j],a[j+1]);
	// 		// 		swap(b[j],b[j+1]);
	// 		// 	}
	// 		// if(a[j]==a[j+1])
	// 		// {
	// 		// 	if(b[j]<b[j+1])
	// 		// 	{
	// 		// 		swap(a[j],a[j+1]);
	// 		// 		swap(b[j],b[j+1]);	
	// 		// 	}
	// 		// }
	// 		if(((double)a[j]/(double)b[j])>((double)a[j+1]/(double)b[j+1]))
	// 		{
	// 				swap(a[j],a[j+1]);
	// 				swap(b[j],b[j+1]);
	// 		}
	// 	}
	// }
	vector<pair<int,int> >v(n);
    for(int i=0;i<n;i++)
    {
        v[i].first=a[i];
        v[i].second=b[i];
        // cout<<"inside"<<endl;
        // int x;
        // cin>>x;
    }
    cout<<"te"<<endl;   
    sort(v.begin(),v.end(),compare);
    cout<<"test"<<endl;
	vector<int> pre(n);
	pre[n-1]=v[n-1].second;
	for(int i=n-2;i>=0;i--)
	{
		pre[i]=pre[i+1]+v[i].second;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<v[i].first<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<v[i].second<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<pre[i]<<" ";
	}
	cout<<endl;
	long long int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans+(v[i].first*pre[i]);
	}
	cout<<"Ans is "<<ans<<endl;
}