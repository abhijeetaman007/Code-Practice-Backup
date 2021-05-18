#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v(26);
	string s1,s2;
	cin>>s1>>s2;
	if(s1.size()<=s2.size())
	{
	for(int i=0;i<s1.size();i++)
	{
		int ans=s1[i]-'a';
		v[ans]++;
	}
	int l=s1.size(),flag=0;
	for(int i=0;i<(s2.size()-l+1);i++)
	{
		
		vector<int> v1(26);
		for(int j=i;j<i+l;j++)
		{
			cout<<s2[j]<<"";
			int a=s2[j]-'a';
			v1[a]++;
			cout<<"\n";
		}
		if(v1==v)
			{
				cout<<"True"<<endl;
				flag=-1;
				break;
			}
			else
			{
				flag=1;
				continue;
			}
	}
	if(flag==-1){return 0;}
	if(flag==1)
		cout<<"False"<<endl;
}
else
{
	cout<<"False"<<endl;
}
}
