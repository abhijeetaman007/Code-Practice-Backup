//division of two number
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  try
  {
    if(b==0)
    throw "Divisor cannot be zero";
  }
  catch(char *msg){
    cout<<msg<<endl;
  }
  cout<<(float)a/(float)b<<endl;
}
