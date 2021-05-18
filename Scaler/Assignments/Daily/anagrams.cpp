#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int n;
	 cin>>n;
	 vector<string> v;
	 string st;
	 for(int i=0;i<n;i++)
	 {
	 	cin>>st;
	 	v.push_back(st);
	 }
	 cout<<"test"<<endl;
	 unordered_map<string,vector<int> >m;
	 for(int i=0;i<n;i++)
	 {
	 	string str=v[i];
	 	sort(str.begin(),str.end());	 	
	 	m[str].push_back(i+1);
	 }
	 vector<vector<int> >res;
		n=m.size();
		auto itr=m.begin();
	while(n--)
	{
		res.push_back(itr->second);
		// itr=itr+1;
		itr++;
	}
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++)
	{
		for(int j=0;j<res[i].size();j++)
			cout<<res[i][j]<<" ";
		cout<<endl;
	}


}