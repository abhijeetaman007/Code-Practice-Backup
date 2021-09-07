// #include<bits/stdc++.h>
// using namespace std;
// #define deb(x) cout<<#x<<" "<<x<<endl;
// int minimum(vector<int> v,int &mx,int &mn,int &mnidx,int &mxidx)
// {
//     int n=v.size();
//     int maxx=v[0],minn=v[0],min_ind=0,max_ind=0;
//     // cout<<"max "<<maxx<<" min "<<minn<<" max in "<<max_ind<<" min in "<<min_ind<<endl;
//     for(int i=0;i<n;i++)
//     {
//         if(maxx<=v[i])
//         {
//             maxx=v[i];
//             max_ind=i;
//         }
//         if(minn>=v[i])
//         {
//             minn=v[i];
//             min_ind=i;
//         }
//     }
//     // cout<<"max "<<maxx<<" min "<<minn<<" max in "<<max_ind<<" min in "<<min_ind<<endl;
//     int final_ans=maxx-minn;
//     // cout<<"final ans "<<final_ans<<endl;
//     for(int i=0;i<n;i++)
//     {
//         if((v[i]==maxx&&max_ind!=i)||(v[i]>maxx))
//         {
//         	int temp=v[i]-maxx;
//             if(temp<=final_ans)
//             {
//                 minn=maxx;
//                	min_ind=max_ind;
//                 maxx=v[i];
//                	max_ind=i;
//                 final_ans=temp;
//             }
//         }
//         else if((v[i]==minn&&min_ind!=i)||(v[i]<minn))
//         {
//             int temp=minn-v[i];
//             if(temp<=final_ans)
//             {
//                 maxx=minn;
//                 max_ind=min_ind;
//                 minn=v[i];
//                 min_ind=i;
//                 final_ans=temp;
//             }
//         }
//         else if(v[i]<maxx&&v[i]>minn)
//         {
//             int temp1=maxx-v[i];
//             int temp2=v[i]-minn;
//             if(temp1<=final_ans&&temp1<=temp2)
//             {
//                 minn=v[i];
//                 min_ind=i;
//                 final_ans=temp1;
//             }
//             else if(temp2<=final_ans&&temp2<temp1)
//             {
//                 maxx=v[i];
//                 max_ind=i;
//                 final_ans=temp2;
//             }
//         }

        
//         // cout<<"step "<<i<<endl;
//         // cout<<"max= "<<maxx;
//         // cout<<"min= "<<minn;
//         // cout<<"final ans after "<<i<<"th ele is"<<final_ans<<endl;
//     }
//     mx=maxx;
//     mn=minn;
//     mnidx = max_ind;
//     mxidx = max_ind;
//     return final_ans;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int q;
//         cin>>q;
//         vector<int> v(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }
//         int flag=0;
//         while(q--)
//         {
//             int x,y;
//             cin>>x>>y;
//             v[x-1]=y;
//             int mn,mx,mnidx,mxidx;
//             int ans; 
//             if(flag==0)
//             {
//                 ans = minimum(v,mn,mx,mnidx,mxidx);
//                 flag=1;
//             }
//             else
//             {
                

//                 int final_ans = ans;
//                 int maxx = mx;
//                 int minn = mn; 
//                 int min_ind = mnidx;
//                 int max_ind = mxidx;
//                 if((v[x-1]==maxx&&max_ind!=x-1)||(v[x-1]>maxx))
//                 {
//                     int temp=v[x-1]-maxx;
//                     if(temp<=final_ans)
//                     {
//                         minn=maxx;
//                         min_ind=max_ind;
//                         maxx=v[x-1];
//                         max_ind=x-1;
//                         final_ans=temp;
//                     }
//                 }
//                 else if((v[x-1]==minn&&min_ind!=x-1)||(v[x-1]<minn))
//                 {
//                     int temp=minn-v[x-1];
//                     if(temp<=final_ans)
//                     {
//                         maxx=minn;
//                         max_ind=min_ind;
//                         minn=v[x-1];
//                         min_ind=x-1;
//                         final_ans=temp;
//                     }
//                 }
//                 else if(v[x-1]<maxx&&v[x-1]>minn)
//                 {
//                     int temp1=maxx-v[x-1];
//                     int temp2=v[x-1]-minn;
//                     if(temp1<=final_ans&&temp1<=temp2)
//                     {
//                         minn=v[x-1];
//                         min_ind=x-1;
//                         final_ans=temp1;
//                     }
//                     else if(temp2<=final_ans&&temp2<temp1)
//                     {
//                         maxx=v[x-1];
//                         max_ind=x-1;
//                         final_ans=temp2;
//                     }
//                 }
//                 ans = final_ans;
//             }
//             cout<<ans<<endl;
//         }
//     }
// }


#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
int minimum(vector<int> v,int &maxx,int &minn,int &min_ind,int &max_ind)
{
    int n=v.size();
    // cout<<"max "<<maxx<<" min "<<minn<<" max in "<<max_ind<<" min in "<<min_ind<<endl;
    for(int i=0;i<n;i++)
    {
        if(maxx<=v[i])
        {
            maxx=v[i];
            max_ind=i;
        }
        if(minn>=v[i])
        {
            minn=v[i];
            min_ind=i;
        }
    }
    // cout<<"max "<<maxx<<" min "<<minn<<" max in "<<max_ind<<" min in "<<min_ind<<endl;
    int final_ans=maxx-minn;
    // cout<<"final ans "<<final_ans<<endl;
    for(int i=0;i<n;i++)
    {
        if((v[i]==maxx&&max_ind!=i)||(v[i]>maxx))
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
        else if((v[i]==minn&&min_ind!=i)||(v[i]<minn))
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
        else if(v[i]<maxx&&v[i]>minn)
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

        
        // cout<<"step "<<i<<endl;
        // cout<<"max= "<<maxx;
        // cout<<"min= "<<minn;
        // cout<<"final ans after "<<i<<"th ele is"<<final_ans<<endl;
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
        int flag=0;
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            v[x-1]=y;
            int minn=v[0],maxx=v[0],min_ind=0,max_ind=0;
            int ans; 
            if(flag==0)
            {
                ans = minimum(v,minn,maxx,min_ind,max_ind);
                flag=1;
                // cout<<ans<<endl;
            }
            else
            {
                deb("first else");
                int final_ans = ans;
                deb(ans);
                deb(maxx);
                deb(minn);
                if((v[x-1]==maxx&&max_ind!=x-1)||(v[x-1]>maxx))
                {
                    deb("upper");
                    int temp=v[x-1]-maxx;
                    if(temp<=final_ans)
                    {
                        minn=maxx;
                        min_ind=max_ind;
                        maxx=v[x-1];
                        max_ind=x-1;
                        final_ans=temp;
                    }
                }
                else if((v[x-1]==minn&&min_ind!=x-1)||(v[x-1]<minn))
                {
                    deb("lower");
                    int temp=minn-v[x-1];
                    if(temp<=final_ans)
                    {
                        maxx=minn;
                        max_ind=min_ind;
                        minn=v[x-1];
                        min_ind=x-1;
                        final_ans=temp;
                    }
                }
                else if(v[x-1]<maxx && v[x-1]>minn)
                {
                    deb("mid");
                    int temp1=maxx-v[x-1];
                    int temp2=v[x-1]-minn;
                    if(temp1<=final_ans&&temp1<=temp2)
                    {
                        deb("mid : first");
                        minn=v[x-1];
                        min_ind=x-1;
                        final_ans=temp1;
                    }
                    else if(temp2<=final_ans&&temp2<temp1)
                    {
                        deb("mid : first");
                        maxx=v[x-1];
                        max_ind=x-1;
                        final_ans=temp2;
                    }
                }
                final_ans = ans;
            }
            cout<<ans<<endl;
        }
    }
}