#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
	    stack<char> st;
	    int f=1;
	    for(int i=0;i<s.size();i++)
	    {
	    	cout<<s[i]<<endl;
	    		if(s[i]=='(')
	    			st.push('(');
	    		else
	    		{
	    			if(s[i]==')')
	    			{
	    				if(!st.empty() && ( st.top()=='(' || st.top()=='?'))
	    				{
	    					st.pop();
	    				}
	    				else{
	    					cout<<"inisede"<<endl;
	    					f=0;
	    					break;
	    				}
	    			}
	    			else if(s[i]=='?')
	    			{
	    				st.push(s[i]);
	    			}
	    		}
	    	
	    }
	    if(st.size()==0 && f==1)
	    	cout<<"YES"<<endl;
	    else
	    	cout<<"NO"<<endl;
    }
}