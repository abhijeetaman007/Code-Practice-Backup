#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int> v(26);
	int t;
	for(int i=0;i<s.size();i++)
	{
		v[s[i]-'a']+=1;
		// v[s[i]]+=1;
	}
	int flag=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==1)
		{
			flag=1;
			t=i;
			break;
		}
	}
	if(flag==1)
		cout<<(char)(t+'a')<<endl;
	else
		cout<<"#"<<endl;
}