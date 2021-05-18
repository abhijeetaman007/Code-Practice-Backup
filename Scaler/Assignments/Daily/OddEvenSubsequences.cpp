#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    int max=0;
    for(int i=0;i<A.size();i++)
    {
        int c=0,flag=0,f=1;
        flagor(int j=i;j<A.size();j++)
        {
            if(A[i]%2==0)
            {
                if(flag=0)
                {
                    f=1;
                    flag=1;
                }
            }
            else
            {
                if(flag=0)
                {
                    f=-1;
                    flag=1;
                }
            }
                if(f>0)
                {
                    if(A[i]%2==0)
                    {
                        c=c+1;
                        cout<<"C is updated from f>0 "<<c<<endl;
                        f=f*(-1);
                        continue;
                    }
                    else
                    {
                        if(max<c)
                        max=c;
                    cout<<"Max is updated from f>0 "<<max<<endl;
                        break;    
                    }
                }
                if(f<0)
                {
                    if(A[i]%2!=0)
                    {
                        c=c+1;
                        cout<<"C is updated from f<0 "<<c<<endl;
                        f=f*(-1);    
                    }
                    else{
                        if(max<c)
                        max=c;
                            cout<<"Max is updated from f<0 "<<max<<endl;
                        break;
                    }
                }
        }
        if(max<c)
        max=c;
    }
    cout<<"Ans is "<<max<<endl;
}