#include<bits/stdc++.h>
using namespace std;
int solve(int n,int b,vector<int> &v)
{
	multiset<int> s;
	unordered_map<int,int> m;
	
	for(int i=0;i<n;i++){
		s.insert(v[i]);
		m[v[i]]++;
	}
	int max,min;
	int ans=INT_MAX;
	while(b--)
	{
		min=*(s.begin());
		auto it=s.end();
		it--;
		max=*(it);
		if(m[min]<=m[max])
		{
			s.erase(s.find(min));
			m[min]--;
			s.insert(min+1);
			m[min+1]++;			
		}
		else
		{
			s.erase(s.find(max));
			m[max]--;
			s.insert(max-1);
			m[max-1]++;
		}
		if(ans>abs(max-min))
			ans=abs(max-min);

	}
		auto it=s.end();
		it--;
		max=*(it);
		min=*(s.begin());
		if(ans>abs(max-min))
			ans=abs(max-min);
		return ans;
}
int main()
{
	int n,b;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cin>>b;
	int ans=solve(n,b,v);
	cout<<"Ans is "<<ans<<endl;
}