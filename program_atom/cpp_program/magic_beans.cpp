#include<cmath>
#define ull unsigned long long int
#include<bits/stdc++.h>
using namespace std;
ull powerLL(ull x, ull n)
{
    ull result = 1;
    while (n) {
        if (n & 1)
            result = result * x;
        n = n / 2;
        x = x * x;
    }
    return result;
}
int main()
{
  unsigned long long int x,y,k,n;
  cin>>x;
  n=1;
  while(1)
  {
    int flag=0;
    k=1;
    y=0;
    while(y<=x)
    {
      y=n*powerLL(2,k-1);
      if(y==x)
      {
        cout<<n;
        flag=1;
        break;
      }
      k++;
  }
  if(flag==1)
  break;
  else
  n++;
}
}
