//Solution 1-- using window sliding texchnique O(n^2)

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s;
	if(s=="\0")
		return 0;
	vector<int> v;
	int ans=0;
	for(int j=0;j<s.size();j++)
	{	
		vector<int> visited(256);
		for(int i=j;i<s.size();i++)
		{		
			if(visited[s[i]]==false)
			{
				visited[s[i]]=true;
				ans=max(ans,i-j+1);
				continue;
			}
			else
			break;
		}

	}
	cout<<ans<<endl;
}