#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d;
        cin>>n>>k>>d;
        vector<int> v(n);
        int min=INT_MAX;
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<=n-d;i++)
        {
            int temp=d;
            int j=i;
             vector<int> flag(k,false);  
            while(temp--)
            {
                flag[v[j]-1]=true;
                j++;
            }
            int c=0;
            for(int k=0;k<flag.size();k++)
            {
                if(flag[k]==true)
                    c++;
            }
            if(c<min)
                min=c;
        }
        cout<<min<<endl;

    }
}