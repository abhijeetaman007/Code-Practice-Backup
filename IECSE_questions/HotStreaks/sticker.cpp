#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
       int n;
       cin>>n;
        vector<int> v(n);
    
      for(int i=0;i<n;i++)
      cin>>v[i];
      if(n==1)
      cout<<1<<endl;
      else
      {
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
                even++;
            else
                odd++;
        }
        if(odd%2!=0)
            cout<<odd<<endl;
        else
            cout<<even<<endl;
      }      
    return 0;
}