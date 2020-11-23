//All combination of well formed parentheses

#include<bits/stdc++.h>
using namespace std;
void helper(int open, int close, string s, vector<string> &ans)
    {
    	cout<<"Function called"<<endl;
    	cout<<"open is "<<open<<" close is "<<close<<endl;
        if(open==0&&close==0)
        { 
        	cout<<"If 1"<<endl;
        	cout<<"String to be pushed"<<s<<endl;
            ans.push_back(s);
        }        
        if(open>0&& open<=close)
        {
        	cout<<"If 2"<<endl;
            s.push_back('(');
            helper(open-1, close, s, ans);
            s.pop_back();
        }        
        if(close>open)
        {
        	cout<<"If 3"<<endl;
            s.push_back(')');
            helper(open, close-1, s, ans);
            s.pop_back();
        }
        cout<<"Function end"<<endl;        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        helper(n, n, s, ans);
        return ans;
    }
int main()
{
	int n;
	cin>>n;
	vector<string> v=generateParenthesis(n);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

}