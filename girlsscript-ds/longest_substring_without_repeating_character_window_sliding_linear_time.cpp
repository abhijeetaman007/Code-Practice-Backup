//Best soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int ans=0;
	cin>>s;
	if(s=="\0")
		return 0;
	//vector<int> v(256);
	for(int i=0;i<s.size();i++)
	{
		map<char,int> pos;
		vector<bool> visit(256);
		for(int j=i;j<s.size();j++)
		{
			//cout<<s[j]<<endl;
			if(visit[s[j]]==false)
			{
				//cout<<"inside if"<<endl;
				visit[s[j]]=true;
				pos[s[j]]=j;
				ans=max(ans,j-i+1);	
				//cout<<"ans is"<<ans<<endl;
			}
			else
			{
				//cout<<"else"<<endl;
				i=pos[s[i]];
				//abcout<<i<<endl;
				break;
			}
		}
	}
	cout<<ans<<endl;
}