#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
         set<int> s;
        vector<int> freq(101);
        for(int i=0;i<n;i++){
            cin>>v[i];
            // freq[v[i]]++;
            s.insert(v[i]);
        }
        int a=0,x=0;
        int j=0;
        long long int ans=0;
        // int y=0;
        
        int finalans=INT_MAX;
        for(auto it=s.begin();it!=s.end();it++)
        {
            x=*(it);
            // cout<<"x is "<<x<<endl;
            ans=0;
            j=0;
          while(j<n)
         {
            // cout<<v[j]<<endl;
                // cout<<"j is "<<j<<endl;
            if(v[j]==x)
            {
                j++;
            }
            else
            {
                ans++;
                j=j+k;
            }
        }
        // cout<<"ans "<<ans<<endl;
        if(ans<finalans)
            finalans=ans;
    }
        cout<<finalans<<endl;
    }
}