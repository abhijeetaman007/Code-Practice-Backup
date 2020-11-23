#include<stdio.h>
int main()
{
  int i,n,a=0,s=0;
  scanf("%d",&n);
  while(n>10)
  {
  while(n!=0)
  {
    a=n%10;
    s=s+a;
    n=n/10;
  }
  if(s>10)
  n=s;
  else
  break;
}
  printf("%d\n",s);
  return 0;
}
