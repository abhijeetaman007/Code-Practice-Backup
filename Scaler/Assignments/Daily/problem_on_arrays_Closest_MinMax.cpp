#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &v) {
	// cout<<"Inside function"<<endl;
	int min=*min_element(v.begin(),v.end());
	int max=*max_element(v.begin(),v.end());
	// cout<<max<<" "<<min<<endl;
	int ans=v.size(),c=0,flag=1,f=1;
	if(max==min)
		return 1;
	for(int i=0;i<v.size();i++)
	{
		c=0;
		if(v[i]==max)
		{
			for(int j=i;j<v.size();j++)
			{
				c=c+1;
				// cout<<c<<endl;
				if(v[j]==min)
				{
					// flag=1;
					// if(flag=1)
					// {
					// 	ans=c;
					// 	flag=0;
					// 	break;
					// }
					if(ans>c);
					{
						ans=c;
						break;	
					}
				}
			}
			// cout<<"c is "<<c<<endl;

		}

		if(v[i]==min)
		{
			c=0;
			for(int j=i;j<v.size();j++)
			{
				c=c+1;
				// cout<<c<<endl;
				if(v[j]==max)
				{
					// flag=1;
					// if(f==1)
					// {
					// 	f=0;
					// 	ans=c;
					// 	break;
					// }
					if(ans>c);
					{
						ans=c;
						break;	
					}
				}
			}
			// cout<<"c is "<<c<<endl;
		}
	}
	return ans;
}

int main()
{
	vector<int> v;
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	cout<<"Ans is"<<solve(v);
}