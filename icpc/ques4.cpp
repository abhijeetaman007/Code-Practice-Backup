#include<bits/stdc++.h>
#define ll long long 

using namespace std;
// sorting vector based on second parameter
// bool myCompare(const pair<int,int> &a, const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }
// int power(int n, int x)
// {
//     if(x==0)
//         return 1;
//     int temp=power(n,x/2);
//     if(x&1)
//         return x*temp*temp;
//     return temp*temp;
// }
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sorted[n];
        for(int i=0;i<n;i++)
        {
            sorted[i]=arr[i];
        }
        sort(sorted,sorted+n);
        int t=-1;
        unordered_map<int,int> m;
        if(n%2!=0)
        {
            for(int i=0;i<n;i++)
            {
                if(i<=n/2)
                {
                    t+=2;
                    if(m.find(sorted[i])!=m.end())
                        m[sorted[i]]=max(t,m[sorted[i]]);
                    else
                        m[sorted[i]]=t;
                }
                else
                {
                    t-=2;
                    if(m.find(sorted[i])!=m.end())
                        m[sorted[i]]=max(t,m[sorted[i]]);
                    else
                        m[sorted[i]]=t;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i<n/2)
                {
                    t+=2;
                    if(m.find(sorted[i])!=m.end())
                        m[sorted[i]]=max(t,m[sorted[i]]);
                    else
                        m[sorted[i]]=t;
                }
                else if(i==n/2)
                {
                    if(m.find(sorted[i])!=m.end())
                        m[sorted[i]]=max(t,m[sorted[i]]);
                    else
                        m[sorted[i]]=t;
                }
                else
                {
                    t-=2;
                    if(m.find(sorted[i])!=m.end())
                        m[sorted[i]]=max(t,m[sorted[i]]);
                    else
                        m[sorted[i]]=t;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<m[arr[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}