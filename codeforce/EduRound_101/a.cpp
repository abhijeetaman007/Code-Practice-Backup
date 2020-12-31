#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

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
	    	// cout<<s[i]<<endl;
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
	    					f=0;
	    					break;
	    				}
	    			}
	    			else if(s[i]=='?')
	    			{
	    				// if(st.empty())
	    				// 	st.push(s[i]);
	    				// else if(st.top()=='(' || st.top()=='?')
	    				// 	st.pop();
	    				// else
	    				// 	st.push(s[i]);
	    				if(s[i]=='?')
	    					st.push(s[i]);
	    				else
	    					st.pop();

	    			}
	    		}
	    	
	    }
	    if(st.size()==0 && f==1)
	    	cout<<"YES"<<endl;
	    else
	    	cout<<"NO"<<endl;
    }
}