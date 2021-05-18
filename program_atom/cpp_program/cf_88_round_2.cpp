#include<bits/stdc++.h>
using namespace std;
int main(){
  int temp;
  cin>>temp;
  while(temp--){
    long long int h,c,t,a;
    cin>>h>>c>>t;
    a=(h+c)/2;
    if(t==h)
    {
      cout<<1<<endl;
      continue;
    }
    else{
      if(t<=a)
      cout<<2<<endl;
      else{
        long double i=(t-c)/(2*t-h-c);
        //cout<<i<<endl;
        long double j=i+1;
      //  cout<<j<<endl;
        long double x= (h*i+c*(i-1))/(2*i-1);
        long double y= (h*j+c*(j-1))/(2*j-1);
        //cout<<x<<endl;
        //cout<<y<<endl;
        long double d1=abs(x-t);
        //cout<<d1<<endl;
        long double d2=abs(y-t);
        //cout<<d2<<endl;
        if(d1<=d2)
        cout<<2*i-1<<endl;
        else
        cout<<2*j-1<<endl;
      }
    }
  }

}
