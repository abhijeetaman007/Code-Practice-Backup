#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,n;
    cin>>n>>m;
    vector<long long int> v(n+1);
    long long int a1=1,b1=n;
    long long int a,b,k;
    for(long long int i=0;i<m;i++)
    {
    	cin>>a>>b>>k;
    	v[a-1]+=k;
    	v[b]=v[b]-k;
    }
    // for(int i=0;i<v.size();i++)
    // 	cout<<v[i]<<" ";
    // cout<<endl;
    for(long long int i=1;i<v.size();i++)
    {
    	// cout<<"v[i] "<<v[i]<<" v[i-1] "<<v[i-1]<<endl;
    	v[i]=v[i]+v[i-1];
    	// cout<<"New v[i] is "<<v[i]<<endl;
    }
    // for(int i=0;i<v.size()-1;i++)
    // 	cout<<v[i]<<" ";
    // cout<<endl;
    cout<<*max_element(v.begin(), v.end()-1);
}