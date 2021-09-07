#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	set<int> s;
	for(int i=0;i<n;i++)
	{
		s.insert(v[i]);
	}
	int count=1;
	auto itr=s.begin();
	// auto it=s.begin();

	// auto preitr=it;
	itr++;
	int max=1;
	for(int i=1;i<n;i++)
	{
		auto preitr=itr;
		preitr--;
		// cout<<*(itr)<<*(preitr)<<endl;
		if((*(itr)-*(preitr))==1)
		{
			count++;
			// cout<<count<<endl;
		}
		else
		{
			if(max<count){
				// cout<<"updated"<<endl;
				max=count;
			}
			count=1;
		}
		itr++;
		// it++;
		// it++;
	}
	if(max<count){
				// cout<<"updated"<<endl;
				max=count;
			}
	cout<<max<<endl;
}