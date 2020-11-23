#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main() {
    int k,n,a,count=0,sum=0;
    cin>>k>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
     int j=v.size()-1;
     int i=0;
    while(count!=k)
    {
        if(v[i]>v[j])
        {
            sum+=v[i];
            count+=1;
            i=i+1;
            continue;
        }
        if(v[j]>v[i])
        {
            sum+=v[j];
            count+=1;
            j=j-1;
            continue;
        }
        if(v[j]==v[i])
        {
            int t1=i;
            int t2=j;
            int flag=0;
            while(v[j]==v[i])
            {
                if(v[i+1]>v[j-1])
                {
                    flag=1;
                    break;
                }
                if(v[i+1]<v[j-1])
                {
                    flag=2;
                    break;
                }
                i=i+1;
                j=j-1;
            }
            i=t1;
            j=t2;
            if(flag==1)
            {
                sum+=v[i];
                count+=1;
                i=i+1;
                continue;   
            }
            if(flag==2)
            {
                sum+=v[j];
                count+=1;
                j=j-1;
                continue;                 
            }
        }

    }
    count=0;
    int s1=0,s2=0;
    while(i!=k)
    {
        s1+=v[i];
        s2+=v[n-1-i];
        i=i+1;
    }
    s1=max(s1,s2);
    sum=max(sum,s1);
    cout<<sum<<endl;
}
