#include<stdio.h>
#include<iostream>
#include <iomanip> // for std::setprecision()
#include<cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  long double x,y,n,k;
while(t--){
  cin>>n;
  k=2;
  while(1)
{
    x=n/(pow(2,k)-1);
    y=ceil(x);
    if(x==y)
   {
     std::cout << std::setprecision(16);
     cout<<x<<endl;
     break;
   }
    k++;
}
}
}
