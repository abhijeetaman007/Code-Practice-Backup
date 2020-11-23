//Finding a subsequence in optimised manner...subsequence length is 2
#include<bits/stdc++.h>
using namespace std;
int solve(string s) {
    int ans=0;
    // for(int i=0;i<s.size();i++)
    // {
    // //     if(s[i]=='A'&& i!=s.size()-1)
    //     {
    //         for(int j=i+1;j<s.size();j++)
    //         {
    //             if(s[j]=='G')
    //             {
    //              ans=ans+1;
    //              cout<<s[i]<<" "<<i<<" "<<j<<endl;
    //              ans=ans%(1000000007);
    //             }
    //         }
    //     }
    // }
    	//optimisation
    	int c=0;
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]=='A')
    		{
    			c+=1;

    		}
    		if(s[i]=='G')
    		{
    			ans=ans+c;
    			ans=ans%(1000000007);
    		}
    	}
    ans=ans%(1000000007);
    return ans;
}
int main()
{
	string s;
	cin>>s;
	cout<<solve(s);
}