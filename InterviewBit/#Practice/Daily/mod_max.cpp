#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	set<int> s;
    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    //add a condition to print 0 when all elements identical
    for(auto it=s.begin();it!=s.end();it++)
    {
    	cout<<(*it)<<endl;
    }
    auto it=s.end();
    it--;
    it--;
    cout<<*(it)<<endl;
}