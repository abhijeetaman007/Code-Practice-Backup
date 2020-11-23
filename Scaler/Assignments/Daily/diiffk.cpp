#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int k;
	cin>>k;
	unordered_set<int>s;
	for(int i=0;i<n;i++)
	{
		if(s.find(v[i])==s.end())
		{
			s.insert(k+v[i]);
		}
		else
		{
			cout<<1<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
}

//Memomry optimised soln below
// int Solution::diffPossible(vector<int> &v, int k) {
//     int n=v.size();
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=i+1;j<n;j++)
// 		{
// 		    if(v[i]+k==v[j])
// 		    return 1;
// 		}
// 	}
// return 0;
// }

