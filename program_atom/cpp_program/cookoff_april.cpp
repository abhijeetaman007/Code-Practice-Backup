#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    printf("Inside while");             //use printf and scanf rather than cout cin
    int n,q;
    cin>>n>>q;
    unsigned long long sum=0;
    int temp=0;
    while(q--)
    {
      int i,j;
      printf("Inside while 2");
      cin>>i>>j;
      cout<<abs(i-temp);
      cout<<abs(j-i);
      sum=sum+abs(i-temp)+abs(i-j);
      cout<<sum;
      temp=j;
    }
    cout<<sum<<endl;
  }
}
