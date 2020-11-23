#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<char,char>> v;
	//v.push_back({'a','b'});
	//cout<<v[0].first<<" "<<v[0].second<<endl;
	string s,t;
	int c=0;
	cin>>s>>t;
	int flag=0;
	if(s.size()==t.size()){
		for(int i=0;i<s.size();i++)
		{
			int f=0;
			for(int j=0;j<v.size();j++)
			{

				if(s[i]==v[j].first)
				{
					f=1;
					if(t[i]==v[j].second)
					{
						flag=0;
						c=c+1;
						continue;
					}
					else
					{
						flag=1;
						cout<<"False";
						return 0;
					}
				}
			}
			if(f==0)
			{
				flag=0;
				c=c+1;
				for(int k=0;k<v.size();k++)
                {
                    if(v[k].second==t[i])
                        return false;
                }
				v.push_back({s[i],t[i]});
			}

		}
		if(c==s.size() && flag==0)
		{
			cout<<"True"<<endl;
		}
	}
	else
	{
		cout<<"False";
		return 0;
	}

}