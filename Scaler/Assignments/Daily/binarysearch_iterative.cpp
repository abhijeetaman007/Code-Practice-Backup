#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int s=0,e=n-1;
	int x;
	cout<<"Enter Element to be searched"<<endl;
	cin>>x;
	int f=0;
	while(e>=s)
	{
		int m=(s+e)/2;
		if(v[m]==x)
		{
			cout<<"Element found at "<<m<<endl;
			f=1;
			break;
		}
		else{ 
				if(x>v[m])
				{
					s=m+1;
				}
				else{
					e=m-1;
				}
			}
	}
	if(f==0)
	cout<<"Element not found"<<endl;
	return 0;
}