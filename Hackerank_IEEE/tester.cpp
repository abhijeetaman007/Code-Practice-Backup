// #include<bits/stdc++.h>
// using namespace std;

// string biggerIsGreater(string w) {
//     int l=w.length();
//     for(int i=l-1;i>=0;i--){
//         for(int j=i-1;j>=0;j--){
//             if(w[i]>w[j]){
//                 char c=w[i];
//                 w[i]=w[j];
//                 w[j]=c;
//                 sort(w.begin()+j+1,w.end());
//                 return w;
//             }
//         }
//     }
//     string k="no answer";
//     return (k);
// }
// int main()
// {
//     int t;
//     cin>>t;
//     string str;
//     while(t--)
//     {
//         cin>>str;
//         str=biggerIsGreater(str);
//         cout<<str;    
//     }
    
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    stack<int>v1,v2;
    cin>>a>>b;
    while(a!=0)
    {
        v1.push(a%10);
        a=a/10;
    }
    while(b!=0)
    {
        v2.push(a%10);
        b=b/10;
    }
    cout<<v1.top()<<" "<<v2.top()<<endl;
}