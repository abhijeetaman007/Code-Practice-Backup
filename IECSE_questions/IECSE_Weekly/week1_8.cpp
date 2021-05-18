//https://codeforces.com/problemset/problem/462/B
#include<bits/stdc++.h>
using namespace std;
// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
	long long int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	long long int max=0;
	vector<long long int> count(26);
	for(int i=0;i<s.size();i++)
	{
		count[s[i]-'A']=count[s[i]-'A']+1;
	}
	long long int c=0;
	while(k>0)
	{

		long long int max=*max_element(count.begin(),count.end());
		if(k-max>=0)
			c=c+max*max;
		else
			c=c+k*(min(max,k));
		k=k-(min(max,k));
		*max_element(count.begin(),count.end())=-1;
		// cout<<"k is "<<k<<" c is "<<c<<endl;
	}
	cout<<c<<endl;


}