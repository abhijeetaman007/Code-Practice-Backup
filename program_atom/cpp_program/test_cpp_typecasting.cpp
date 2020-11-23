#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  x='A';      //implicit typecasting
  char y;
  y='a';
  cout<<x<<endl;           //integer-ASCII is printed since already it is typecasted
  cout<<char(x)<<endl;     //explicit typecasting
  cout<<y<<endl;           //char is printed
  cout<<int(y)<<endl;       //integer-ASCII is printed
}
