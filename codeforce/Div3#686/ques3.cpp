#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    std::vector<int> v(n);
    unordered_map<int,bool> m1;
           for(int i=0;i<n;i++){
    	cin>>v[i];
        m1[v[i]]=false;
    }
    int ans=0;
    int flag=0;
    if(m1.size()==1)
    {
        cout<<ans<<endl;
        continue;
    }
    ans=1;
    // int flag=0;
    int fin=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ans=0;
        if(m1[v[i]]==false){
            m1[v[i]]=true;
            for(int j=0;j<n;j++)
            {
                if(v[j]==v[i])
                {
                    if(flag==1)
                    {
                        ans=ans+1;
                        flag=0;
                    }
                }
                else
                    flag=1;
            }
            if(flag==1)
            ans=ans+1;
        // cout<<ans;
            if(fin>ans)
            {
                fin=ans;
            }
        }
    }
    cout<<fin<<endl;
   
}
}