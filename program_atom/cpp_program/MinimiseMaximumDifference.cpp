#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<long long int> v;
   long long int n,a,b,sum=0,avg,diff=0,k;
   cin>>n;
  while(n--)
  {
    cin>>a;
    v.push_back(a);
    sum+=a;
  }
  //int b,avg;
  cin>>b;
  cout<<sum<<endl;
  cout<<v.size();
  avg=(sum/(v.size()));
  cout<<"Avg is"<<avg<<endl;
  for(long long int i=0;i<v.size();i++){
    cout<<"Old V[i] is "<<v[i]<<endl;
    if(v[i]<avg){
      cout<<b<<endl;
      cout<<v[i]<<endl;
      v[i]=v[i]+b;
      cout<<v[i]<<endl;
      cout<<"Test"<<endl;
      continue;
    }
    if(v[i]>avg)
    {
      v[i]=v[i]-b;
      cout<<"Test 2"<<endl;
      continue;
    }
      if(v[i]==avg)
      {
        v[i]=v[i]-b;
        continue;
      }
    //  if(v[i]==b){
      //  k=i;
      //}
      cout<<"New V[i] is "<<v[i]<<endl;
  }
  v[k]=v[k]-b;
sort(v.begin(),v.end());
  //cout<<v.front();
  //cout<<v.back();
  for(long long i=0;i<v.size();i++)
  cout<<endl<<v[i]<<endl;
  diff=v.back()-v.front();
  cout<<"Difference is "<<diff;
  return 0;
}
