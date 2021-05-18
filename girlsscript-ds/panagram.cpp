#include <bits/stdc++.h>
using namespace std;

int main() {
    //code
    int t;
    cin>>t;
    cin.ignore(1,'\n');
    while(t--){
        string s;
        getline(cin,s);
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        int a[26]={0};
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ')
            {
                int ans=s[i]-'a';
                //cout<<s[i]<<" "<<ans<<endl;
                a[ans]++;
            }
            else{continue;}
        }
        int flag=0;
        for(int i=0;i<26;i++){
            if(a[i]==0){
                flag=1; 
                break;
            }
        }
        if(flag==1){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}