#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){

  long long int t,n,q,a,i,sum=0,d=0,q1=0;
  scanf("%d",&t);
  vector<long long int> v;
  //int q1=2*q;
  while(t--){
    v.push_back(0);
    scanf("%d",&n);
    scanf("%d",&q);
      a=n+1;
     q1=2*q;
  while(q1--){
    scanf("%d",&a);
    v.push_back(a);
  }
  for(i=0;i<(v.size()-1);i++)
  {d=abs(v[i+1]-v[i]);
  sum=sum+d;
  }
  printf("%d\n",sum);
  v.clear();
  sum=0;
  d=0;
}
}
