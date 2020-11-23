#include<stdio.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v1,v2;
  int t,a=0,b=0,n=0,i=0;
  float c=0.0;
    cin>>n;
    int temp=n;
    while(n--){
      cin>>a;
      v1.push_back(a);
    }
    n=temp;
    while(n--){
      cin>>a;
      v2.push_back(a);
    }
    a=0;
    i=0;
    n=temp;
    while(n--){
      if((v1[i]-v2[i])>0)
        a++;
      if((v2[i]-v1[i])>0)
        b++;
      i++;
    }
    if(a!=0)
    {
      c=b+1;
      c=(c/a);
      cout<<ceil(c)<<endl;
    }
    else
    cout<<-1<<endl;
}
