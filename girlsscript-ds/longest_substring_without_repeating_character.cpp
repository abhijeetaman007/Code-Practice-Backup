//Solution 1-- using maps

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s;
	if(s=="\0")
		return 0;
	int count=0,flag=0;
	// for(int i=0;i<s.size();i++)
	// {
	// 		if(s[i]==' ')
	// 		{
	// 			count+=1;
	// 			flag=1;
	// 		}
	// 		else
	// 			{
	// 				flag=0;
	// 				break;
	// 			}
	// }
	// if(flag==1)
	// {
	// 	return 1;
	// }
	vector<int> v;
	map<char,bool> m;
	for(int j=0;j<s.size();j++)
	{	
		t="\0";
		//bool visited[26]={false};
		map<char,bool> visited;
		for(int i=j;i<s.size();i++)
	{		
		int ans=s[i]-'a';
		if(visited[ans]==false)
		{
			visited[ans]=true;
			t+=s[i];
		}
		else
		{
			v.push_back(t.size());
			t="\0";
			//memset(visited,false,sizeof(visited));
			visited.clear();
			visited[ans]=true;
			t+=s[i];
		}
	}
	if(t!="\0")
	{
		v.push_back(t.size());
	}	
	}
	
	cout<<*max_element(v.begin(),v.end());	
}