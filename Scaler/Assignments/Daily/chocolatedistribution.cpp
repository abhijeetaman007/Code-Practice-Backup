#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b;
	cin>>n;
	std::vector<int> v(n);
	if(v.size()<b){
		cout<<0;
		return 0;		
	}
	if(b==0){
		cout<<0;
		return 0;
	}

	for(int i=0;i<n;i++)
		cin>>v[i];
	cin>>b;
	int min=INT_MAX;
	sort(v.begin(),v.end());
	min=v[b-1]-v[0];
	for(int i=0;i<n;i++)
	{
		if(i+b-1<n)
		{
			if(min>v[i+b-1]-v[i])
				min=v[i+b-1]-v[i];
		}
		else
			break;
	}
	cout<<"Ans is "<<min<<endl;
}