#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n;
        s=2*n;
        vector<int> v(s);
        for(int i=0;i<s;i++)
            cin>>v[i];    
        int i=n-1;
        int j=n;
        int ans=0;
        while((i>=0) && (j<s) && (v[i]==v[j]))
        {
            ans=ans+2;
            i--;
            j++;
            // cout<<"ans is "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}
