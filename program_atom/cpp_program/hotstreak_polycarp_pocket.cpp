#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    int t;
//    cin>>t;
  //  while(t--)
    //{
        int n,a;
        cin>>n;
        vector<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s.push_back(a);
        }
        int countmax=1;

        for(int i=0;i<n;i++){
                int count=1;
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j])
                    count++;
            }
            if(count>countmax)
                countmax=count;
        }
        cout<<countmax<<endl;
    //}


}
