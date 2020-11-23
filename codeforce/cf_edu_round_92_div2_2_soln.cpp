#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long ans=0,sum1=0,sum2=0;
        int ps=0;
       int n,k,z,i,j;
       cin>>n>>k>>z;
       int a[n],b[n],c[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           b[i]=c[i]=a[i];
       }
       for(i=0;i<k+1;i++)
       sum1+=a[i];
       ans=max(ans,sum1);
       
       for(j=1;j<=z;j++){
           ps=0;
           sum1=0,sum2=0;
           if(k-2*j>=1)
           {
           
           for(i=1;i<k+1-2*j;i++)
           ps=max(ps,(a[i]+a[i-1]));
           for(i=0;i<k+1-2*j;i++)
           sum1+=a[i];
           sum1+=j*ps;
           }
           
           ps=0;
           
           if(k-2*j>=0)
           {
           for(i=1;i<k+1-(2*j-1);i++)
           ps=max(ps,a[i]+a[i-1]);
           for(i=0;i<k+1-(2*j-1);i++)
           sum2+=a[i];
           sum2+=(j-1)*ps;
           sum2+=a[k-2*j];
           }
           sum1=max(sum1,sum2);
           ans=max(ans,sum1);
           
       }
       cout<<ans<<endl;
       
    }
}
