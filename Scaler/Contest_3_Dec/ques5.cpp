#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int y)
{
    int mod=1e9+9;
    long long int res=1;
    while(y>0)
    {
        if(y&1)
        {
            res=(res%mod*x%mod)%mod;
            y=y-1;
        }
        x=((x%mod)*(x%mod))%mod;
        y=y/2;
    }
    return res;
}


int hashh(long long int l,long long int r,string s)
{
    long long int h=0;
    long long int p=31;
    long long int mod=1e9+9;
    int a=0;
    cout<<"l is "<<l<<"  r is "<<r<<endl;
    for(long long int i=l;i<=r;i++)
    {
        cout<<"char is "<<s[i]<<endl;
        cout<<(s[i]-'a'+1)<<endl;

        long long int x=power(p,a);
        cout<<x<<endl;
        h=(h+((s[i]-'a'+1)*x))%mod;
        a++;
    }
    return h;
}


int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<vector<int> > v((n),vector<int> (3));
    for(int i=0;i<n;i++)
    {
        cin>>v[i][0]>>v[i][1]>>v[i][2];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i][0]<<" " <<v[i][1]<< " "<< v[i][2]<<endl;
    }

    vector<int> ans(n);
    long long int h=0;
    for(int i=0;i<n;i++)
    {
        cout<<"i is "<<i<<endl;
        long long int l=v[i][0];
        long long int r=v[i][1];
        cout<<l<<" "<<r<<endl;
        // h=hashh(l,r,s);


        long long int h=0;
    long long int p=31;
    long long int mod=1e9+9;
    int a=0;
    cout<<"l is "<<l<<"  r is "<<r<<endl;
    for(long long int i=l;i<=r;i++)
    {
        cout<<"char is "<<s[i]<<endl;
        cout<<(s[i]-'a'+1)<<endl;

        long long int x=power(p,a);
        cout<<x<<endl;
        h=(h+((s[i]-'a'+1)*x))%mod;
        a++;
    }
    

        cout<<"h is "<<h<<endl;
        if(h==v[i][2])
        ans[i]=1;
        else
        ans[i]=0;
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
}
