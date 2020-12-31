#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ans=0;
	stack<pair<char,int> >st;
	for(int i=0;i<s.size();i++)
	{
		pair<char,int> temp;
		if(s[i]=='(')
		{
			temp.first='(';
			temp.second=i;
			st.push(temp);
		}
		else if(s[i]==')')
		{
			// cout<<"i is "<<i<<endl;
			// cout<<"first "<<(s[(st.top()).second+1]!=')' && s[(st.top()).second+1]!='(')<<endl;
			// cout<<"second "<<(s[i-1]!='(' && s[i-1]!=')')<<endl;
			// cout<<"third"<<(((i-(st.top()).second)-1)>1)<<endl;
			if((s[(st.top()).second+1]!=')' && s[(st.top()).second+1]!='(')  || (s[i-1]!='(' && s[i-1]!=')') )
			{
				if(!(((i-(st.top()).second)-1)>1))
				{
					ans=1;
					break;
				}
				else
				{
					ans=0;
					st.pop();
				}
			}
			else
			{
				ans=1;
				break;
			}				
		}
	}
	cout<<ans<<endl;
}