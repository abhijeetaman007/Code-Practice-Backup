#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
  long int t;
  cin>>t;
  while(t--)
  {
    double h,c,a,d,t;
    cin>>h>>c>>t;
    a=(h+c)/2;
    cout<<"a is"<<a<<endl;
    d=a-t;
    cout<<" d is"<<d<<endl;
    cout<<"d is"<<d<<endl;
    if(t==h || t==c)
    {
      cout<<"1"<<endl;
      continue;
    }
    if(t==a)
    {
      cout<<"2"<<endl;
      continue;
    }
    double x=(2*c+h)/3;
    double y=(2*h+c)/3;
    if(t<x)
    {
      cout<<x<<endl;
    }
    else{
      if(t>y)
      {
        cout<<y<<endl;
        continue;
      }
      else{
        double i=2,d1=0,d2=0,n=0,temp=0;
        if(t<a)
        {
          do {
            temp=n;
            n=((i-1)*h+i*c)/((2*i)-1);
             cout<<"n is"<<n<<endl;
            i=i+1;
          } while(n<t);
          d1=abs(t-n);
          d2=abs(temp-t);
          cout<<"d1 is"<<d1<<endl;
          cout<<"d2 is"<<d2<<endl;
          //cout<<"i is"<<i<<endl;
          if(d1<d2)
          {
            cout<<"t-n is"<<abs(t-n)<<endl;
            cout<<"a-t is"<<abs(a-t)<<endl;
            if(abs(a-t)<abs(t-n))
            cout<<2<<endl;
            else
            cout<<(2*i-3)<<endl;
          }
          else
          {
            if(abs(a-t)<abs(temp-t))
            cout<<2<<endl;
            else
            cout<<(2*i-5)<<endl;
          }

        }
        else{
          do {
            temp=n;
            n=(i*h+(i-1)*c)/((2*i)-1);
            //cout<<"n is"<<n<<endl;
            i=i+1;
          } while(n>t);
          d1=abs(t-n);
          d2=abs(temp-t);
          //cout<<"i from else is"<<i<<endl;
          if(d1<d2)
          {
            if(abs(a-t)<abs(t-n))
            cout<<"2"<<endl;
            else
            cout<<(2*i-3)<<endl;
          }
          else
          {
            if(abs(a-t)<abs(t-temp))
            cout<<"2"<<endl;
            else
            cout<<(2*i-5)<<endl;
          }
        }
      }
    }
  }
}
