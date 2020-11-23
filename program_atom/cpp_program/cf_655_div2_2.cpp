#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(n%2==0)
    cout<<(n/2)<<" "<<(n/2)<<endl;
    else
    {
    //  vector<int> a,b;
    int a=0,b=0,t=0,l=n-1,x=n-1,y=1;
      for(int i=1;i<=n/2;i++)
      {
        a=i;
        b=n-i;
        for(int j=a;j!=0;j--)
        {
          if(b%j==0 && a%j==0)
          { //cout<<"j is"<<j<<endl;
            t=(b/j)*(a/j)*j;
            //cout<<"t is"<<t<<endl;
            if(t<l)
            {
              l=t;
              x=a;
              y=b;
            }
            break;
          }
        }
      }
      //cout<<"lcm is"<<l<<endl;
      cout<<y<<" "<<x<<endl;
    }
  }
}
