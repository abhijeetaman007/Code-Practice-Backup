#include<stdio.h>
long long int fact(int a)
{
  long long int i=1,p=1;
  for(i=1;i<=a;i++)
  {
    p=p*i;
  }
  return p;
}
int main()
{
  int n;
  long long int d;
//  scanf("%d",&n);
  //d=fact(16)/fact(15);
  d=fact(21);
  printf("%llld\n",d);
}
