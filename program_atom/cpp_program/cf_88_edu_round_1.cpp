#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//#define ld long double
int main()
{
  long int temp;
  cin>>temp;
  while(temp--)
  {
    ll h,c,a,t;
    cin>>h>>c>>t;
    a=(h+c)/2;
    long double y=((2*(long double)h+(long double)c)/3);
    if(t<=a)
    {
      cout<<"2"<<endl;
    }
    else
    {
      if(t>=y)
      {
      //  cout<<abs(t-y)<<endl;
    //    cout<<abs(t-h)<<endl;
        if(y==t)
        {
          cout<<"3"<<endl;
          continue;
        }
        if(abs(t-y)<abs(t-h))
        cout<<"3"<<endl;
        else
        cout<<"1"<<endl;
      }
      else
      {
        long double n=0,d1=0,d2=0,temp=0;
        long double i=0,j=0;
        i=(t-c)/(2*t-h-c);
      //  cout<<"i is"<<i<<endl;
        j=i+1;
      //  cout<<"j is"<<j<<endl;
        long double c1=(i*h+(i-1)*c)/((2*i)-1);
      //  cout<<c1<<endl;
        long double c2=(j*h+(j-1)*c)/((2*j)-1);
        //cout<<c2<<endl;
        d1=abs((long double)t-c1);
        //cout<<"d1 is"<<d1<<endl;
        d2=abs((long double)t-c2);
        //cout<<"d2 is"<<d2<<endl;
        if(d1<d2)
        {
          if((t-y)<d2)
          cout<<"3"<<endl;
          else
          cout<<(2*i-1)<<endl;
        }
        else
        {
          if((t-y)<d2)
          cout<<"3"<<endl;
          else
          cout<<(2*j-1)<<endl;
        }
      }
    }
  }
}
