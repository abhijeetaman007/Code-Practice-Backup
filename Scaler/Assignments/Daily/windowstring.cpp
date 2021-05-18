#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,s;
	cin>>str>>s;
	map<char,int> m1,m2;
	set<int>s1;
	for(int i=0;i<s.size();i++)
	{
		m1[s[i]]++;
	}
	int count=0;
	int min_index;
	int max_index;
	int flag=0;
	for(int i=0;i<str.size();i++)
	{
		if(flag==0){
		if(m1.find(str[i])!=s.end())
		{
			m2[str[i]]++;
			s1.insert(i);
		}
		if(m2[str[i]]==m1[str[i]])
		{
			count++;
		}
		if(count==m1.size()){
			flag=1;
			min_index=*(s1.begin());
			max_index=*(s1.end());
		}
		}
		else
		{
			
		}

	}
}