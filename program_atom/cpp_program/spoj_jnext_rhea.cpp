#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int flag=0;
        cin>>n;
        int index=0;
        int a[100000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                flag=1;
                index=i;
                break;
            }
        }
        if(flag!=1){
            cout<<-1<<endl;
        }
        else{
            //int sum=0;
            sort(a+index+1,a+n);
            for(int i=0;i<n;i++){
                    cout<<a[i];
                //sum+=a[i]*(pow(10,n-i+1));
            }
            //cout<<sum<<endl;

        }
    }


}
