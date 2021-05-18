// https://codeforces.com/problemset/problem/750/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a;
    cin>>n>>k;
    int total=0,count=0;
    for(int i=1;i<=n;i++)
    {
        total+=i*5;
        if(total+k<=240)
        {
            count++;
        }
        else
        break;
    }
    cout<<count<<endl;
}