#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,p,k;
		cin>>n>>x>>p>>k;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			{
				cin>>v[i];
			}
		sort(v.begin(),v.end());
		int pos,flag=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]==x)
			{
				pos=i+1;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{	cout<<"inside"<<endl;
			v[k-1]=x;
			sort(v.begin(),v.end());
			for(int i=0;i<n;i++)
		{
			if(v[i]==x)
			{
				pos=i+1;
				// flag=1;
				break;
			}
		}
		}
		// cout<<pos<<" "<<k<<" "<<p<<endl;
			if(p<=pos)
			{
				if(k<=p)
				{
					if(flag==0)
						cout<<pos-p+1<<"m"<<endl;
					else
					cout<<pos-p<<endl;
				}
				else
					cout<<-1<<endl;
			}
			else
			{
				if(k>=p){
					if(flag==0)
						cout<<pos-p+1<<"m"<<endl;
					else
					cout<<p-pos<<endl;
				}
				else
					cout<<-1<<endl;
			}
		//}
	}
}