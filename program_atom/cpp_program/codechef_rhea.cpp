#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,e;
        cin>>n>>m;
        vector<int>a;
        for(int i=0;i<m;i++)
        {
            cin>>e;
            a.push_back(e);
        }

        vector<int>p;
        vector<int>q;

      for(int i=1;i<=n;i++){
            int flag=1;
            for(int j=0;j<m;j++)
            {
                if(i==a[j]){
                    flag=0;
                    break;
                }
                flag=1;

            }
            if(flag==1){
                    //checking
                //cout<<i<<endl;
                if(p.size()<=q.size())
                    p.push_back(i);
                else
                    q.push_back(i);
            }

      }
      for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
      }
      cout<<endl;
      for(int i=0;i<q.size();i++){
        cout<<q[i]<<" ";
      }
      cout<<endl;


    }
}
