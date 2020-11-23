// Closest MinMax
#include<bits/stdc++.h>
using namespace std;
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
	int max=*max_element(v.begin(),v.end());
	int min=*min_element(v.begin(),v.end());
	int max_pos;
	int min_pos;
	int ans=1000000000;
	bool max_found=false,min_found=false;
	for(int i=0;i<n;i++)
	{
		if(v[i]==max || v[i==min])
		{
			if(v[i]==max)
			{
				max_found=true;
				max_pos=i;
				cout<<max_pos<<endl;
				if(min_found)
				{
					if(ans>(abs(max_pos-min_pos)+1))
						ans=abs(max_pos-min_pos)+1;
				}
				
			}
			if(v[i]==min)
			{
				min_found=true;
				min_pos=i;
				cout<<min_pos<<endl;
				if(max_found)
				{
					if(ans>abs(max_pos-min_pos)+1)
						ans=abs(max_pos-min_pos)+1;
				}
			}
		}
	}
	cout<<"Ans is "<<ans<<endl;
}
