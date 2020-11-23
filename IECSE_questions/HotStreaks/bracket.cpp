#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]==')'||s[i]=='(')
    		c++;
    }
    cout<<c;
}