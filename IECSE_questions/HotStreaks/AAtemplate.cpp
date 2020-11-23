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
    for(int i=0;i<19;i++)
    {
    	s=s+"aacaabccacbcbccccbbcabb";
    } 
    cout<<s;
    return 0;
}