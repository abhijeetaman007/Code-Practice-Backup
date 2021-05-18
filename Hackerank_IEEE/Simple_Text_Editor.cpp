//https://www.hackerrank.com/challenges/simple-text-editor/problem?h_r=internal-search
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<string> s;
	s.push("\0");
	string str="\0";
	int q;
	cin>>q;
	int a;
	while(q--)
	{
		cin>>a;
		if(a==1)
		{
			string s1;
			cin>>s1;
			if(str.size()==0)
			{
				str=s1;
				s.push(str);
				cout<<"present state: "<<s.top()<<endl;
			}
			else
			{
				str.insert(str.size(),s1);
				s.push(str);
				cout<<"present state: "<<s.top()<<endl;	
			}	
		}
		if(a==2)
		{
			int k;
			cin>>k;
			str.erase(str.end()-k,str.end());
			s.push(str);
			cout<<"present state: "<<s.top()<<endl;
		}
		if(a==3)
		{
			int k;
			cin>>k;
			cout<<str[k-1]<<endl;
		}
		if(a==4)
		{
			s.pop();
			str=s.top();
			cout<<"present state: "<<s.top()<<endl;
		}
	}
}
