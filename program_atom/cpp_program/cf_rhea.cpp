#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        stack<char>s;
        int c=0;
        for(int i=0;i<str.length();i++){
                if(!s.empty()){
                    if(str[i]==')'&&s.top()=='(')
                s.pop();
            else{
                s.push(str[i]);
            }
                }
                else{
                    s.push(str[i]);
                }


        }
        c=s.size()/2;
        cout<<c<<endl;

    }


}
