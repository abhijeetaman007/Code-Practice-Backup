#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int start=-1;
	int end=-1;
	int flag=0,f=0;
	int ans=0;
	for(int i=0;i<n-1;i++)
	{
		if(v[i+1]>v[i])
		{
			if(flag==0)
			{
				flag=1;
				start=i;	
				cout<<"start is "<<start<<endl;
			}
			else
			{
				if(f==1)
				{
					f=0;
					if(ans<(end-start+1))
						ans=end-start+1;
					cout<<"ans is "<<ans<<endl;
					start=i;
					cout<<"start is "<<start<<endl;
				}
				else
					continue;
			}
		}
		else
		{
			if(flag==1)
			{
				end=i+1;
				if(ans<end-start+1)
				ans=end-start+1;
				f=1;
				cout<<"end found "<<end<<endl;
			}
			else
				continue;
		}
	}
	cout<<ans<<endl;
}