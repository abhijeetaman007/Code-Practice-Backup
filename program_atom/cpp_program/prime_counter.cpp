#include<stdio.h>
int prime(int b)
{
  int d=0,c=0,i,flag=0,j=0;
  if(b==1)
  return 0;
  else{
    for(j=2;j<=b;j++)
    {
      for(i=2;i<j;i++)
    {
      d=j%i;
      if(d==0)
      {
        flag=1;
        break;
      }
      else
      flag=0;
    }
    if(flag==0)
    c=c+1;
  }
    return c;
  }
}
int main()
{
  int n,p;
  scanf("%d",&n);
  p=prime(n);
  printf("%d\n",p);
  return 0;
}
