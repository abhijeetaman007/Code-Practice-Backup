#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int n,q,c,a,i=0,j=0;
     cin>>n;
     cin>>q;

     vector<vector<int> > v(n);
     //cin>>c;
     for(i=0;i<n;i++){
         cin>>c;
         cout<<"The value of"<<c;
         for(j=0;j<c;j++){
           cout<<"Inside loop";
             cin>>a;
             v[i].push_back(a);
         }
     }
     while(q--){
         cin>>i;
         cin>>j;
         cout<<v[i][j];
     }
    return 0;
}
