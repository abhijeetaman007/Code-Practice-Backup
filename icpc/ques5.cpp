#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
int minimum(vector<int> v)
{
    int n=v.size();
    int maxx=v[0],minn=v[0],min_ind=0,max_ind=0;
    for(int i=0;i<n;i++)
    {
        if(maxx<v[i])
        {
            maxx=v[i];
            max_ind=i;
        }
        if(minn>v[i])
        {
            minn=v[i];
            min_ind=i;
        }
    }
    int final_ans=maxx-minn;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=maxx && max_ind!=i)
        {
            int temp=v[i]-maxx;
            if(temp<=final_ans)
            {
                minn=maxx;
                min_ind=max_ind;
                maxx=v[i];
                max_ind=i;
                final_ans=temp;
            }
        }
        else if(v[i]<=minn && min_ind!=i)
        {
            int temp=minn-v[i];
            if(temp<=final_ans)
            {
                maxx=minn;
                max_ind=min_ind;
                minn=v[i];
                min_ind=i;
                final_ans=temp;
            }
        }
        else if(v[i]<maxx&v[i]>minn)
        {
            int temp1=maxx-v[i];
            int temp2=v[i]-minn;
            if(temp1<=final_ans&&temp1<=temp2)
            {
                minn=v[i];
                min_ind=i;
                final_ans=temp1;
            }
            else if(temp2<=final_ans&&temp2<temp1)
            {
                maxx=v[i];
                max_ind=i;
                final_ans=temp2;
            }
        }
    }
    return final_ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q;
        cin>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            v[x-1]=y;
            int ans=INT_MAX;
            // for(int i=0;i<n-1;i++)
            // {
                ans = minimum(v); 
            // }
            cout<<ans<<endl;
        }
    }
}