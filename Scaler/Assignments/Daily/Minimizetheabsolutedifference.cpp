#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	vector<int> a(n1),b(n2),c(n3);
	for(int i=0;i<n1;i++)
		cin>>a[i];
	for(int i=0;i<n2;i++)
		cin>>b[i];
	for(int i=0;i<n3;i++)
		cin>>c[i];
	int i=0;
	int j=0;
	int k=0;
	int ans=INT_MAX;
	while(i<n1 && j<n2 && k<n3)
	{
		int minn=min(a[i],min(b[j],c[k]));
		int maxx=max(a[i],max(b[j],c[k]));
		if(ans>abs(maxx-minn))
			ans=abs(maxx-minn);
		if(minn==a[i])
		{
			i++;
		}
		else
		{
			if(minn==b[j])
			{
				j++;
			}
			else
			{
				k++;
			}
		}
	}
	cout<<"Ans is "<<ans<<endl;
}