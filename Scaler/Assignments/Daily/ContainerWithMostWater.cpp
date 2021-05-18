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
	int i=0;
	int j=n-1;
	int ans=0;
	while(i<j)
	{
		long long int area=(long long int)(j-i)*(min(v[i],v[j]));
		if(ans<area)
			ans=area;
		if(v[i+1]>=v[j-1])
			i++;
		else
			j--;
	}
	cout<<ans<<endl;
}