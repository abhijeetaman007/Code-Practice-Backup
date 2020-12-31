//Most optimized TC-O(N) and SC-O(N) soln of longest non repeating substring

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int i=0;
	int j=0;
	int ans=0;
	unordered_set<char> s;
	while(j<str.size())
	{
		if(s.find(str[j])==s.end())
		{
			s.insert(str[j]);
			j++;
		}
		else
		{
			
			s.erase(str[i]);
			i++;
		}
		if(ans<s.size())
			ans=s.size();
	}
	cout<<ans<<endl;
}