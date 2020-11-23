#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t=0;
  unsigned long long n,w;
  unsigned long long sum=0,s=0,i=0,count=0,c=0,a=0;
  vector<int> v;
  cin>>t;
  while(t--){
  cin>>n>>w;
  while(n--){
    cin>>a;
    v.push_back(a);
  }
  sort(v.begin(),v.end(),greater<int>());
  //cout<<v.size();
  for(i=0;i<v.size();i++)
{
//  cout<<"Test\n";
  sum=sum+v[i];
  c=c+1;
  s=sum/c;
  if(s>=w){
    count=count+1;
  }
  else
  break;
}
cout<<count<<endl;
v.clear();
//cout<<v.size();
sum=0;
c=0;
count=0;
sum=0;
}
}
