#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,m,n;
	cin>>l>>m>>n;
	vector<int> a(l),b(m),c(n);
	for(int i=0;i<l;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
		cin>>c[i];

	int ans=INT_MAX;
	int i=0,j=0,k=0;
	while(i<l && j<m && k<n)
	{
		int MIN=min(a[i],min(b[j],c[k]));
		int MAX=max(a[i],max(b[j],c[k]));
		if(ans>MAX-MIN)
			ans=MAX-MIN;
		if(MIN==a[i])
			i++;
		else if(MIN==b[j])
				j++;
			else
				k++;	
	}
	 cout<<ans<<endl;
}