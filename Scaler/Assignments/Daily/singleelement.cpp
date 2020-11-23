#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int l=0,r=n-1;
	int ans;
	while(l<=r)
	{
		int m=(l+r)/2;
		int t;
		if((m-1)>=0 && v[m]==v[m-1]){
			t=m;
		}
		else{	
			 	if(m+1<n && v[m]==v[m+1])
					t=m+1;
				else
				{
					ans=v[m];
					break;
				}
			}
		if(t%2==0)
		{
			r=m-1;
		}
		else
		{
			l=m+1;
		}
	}
	cout<<"Ans is "<<ans;

}