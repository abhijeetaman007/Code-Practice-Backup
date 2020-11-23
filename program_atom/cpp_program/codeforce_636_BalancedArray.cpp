#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n=0,i=0;
    vector <long long int> v1,v2;
    cin>>n;
    if(n%4!=0){
    cout<<"NO"<<endl;
    continue;
  }
  else{
    cout<<"YES"<<endl;
    for(i=1;i<=n;i++)
    {
      if((i%2)==0)
      v1.push_back(i);
      else
      v2.push_back(i);
  }
}

    n=n/2;
    v2[n-1]=v1[n-1]+(n-1);

  for(i=0;i<n;i++)
    printf("%lld ",v1[i]);
  for(i=0;i<n;i++)
    printf("%lld ",v2[i]);
  printf("\n");
  v1.clear();
  v2.clear();
  }
}
