#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=0;
        int x_rem=x;
            int j=1;

        while(i < n){
            if(x_rem == 0){
                break;
            }
            if(a[i] != 0 && j < n-1){
                if((int)(log2(a[i])) == (int)(log2(a[j]))){
                    int p = (int)(log2(a[i]));
                    // int pow()
                    a[i] ^= 1LL << p;
                    // a[i] ^= ;
                    a[j] ^= 1LL << p;
                    // a[j] ^= 1LL << p;
                    if(a[i] == 0) i++;
                    j=i+1;
                    x_rem--;
                }
                else{
                    j++;
                }
            }
            else if(j == n-1){
                int p = (int)(log2(a[i]));
                a[i] ^= 1LL << p;
                a[j] ^= 1LL << p;
                if(a[i] == 0) i++;
                x_rem--;
                j=i+1;
            }
            else{
                i++;
                j=i+1;
            }
            for(int k=0;k<n;k++)
                cout<<a[k]<<" ";
            cout<<endl;
        }
        cout<<"x is "<<x_rem<<endl;
        cout<<" i is "<<i<<endl;
        if(x_rem > 0){
            int p = (int)(log2(min(a[i-1], a[i-2])));
            a[i-1]^= 1LL << p;
            a[i-2]^= 1LL << p;
            cout<<"p is "<<p<<endl;
            if(x_rem % 2 == 0){
                a[i-1]^= 1LL << p;
                a[i-2]^= 1LL << p;
            }
        }
        cout<<"final is "<<endl;
        for(int i=0;i<a.size();i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}




