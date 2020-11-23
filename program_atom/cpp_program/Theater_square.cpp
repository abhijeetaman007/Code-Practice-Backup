#include<stdio.h>
int main()
{
  long long int m,n,a,i=0,c=0,p=0,q=0;
  scanf("%lld%lld%lld",&m,&n,&a);
  c=(m/a)*(n/a);
  printf("%d\n",c);
  if(m%a!=0&&m>=a)
  {
    c=c+(n/a);
    printf("%d\n",c);
  }
  if(n%a!=0&&n>=a)
  {
    c=c+(m/a);
    printf("%d\n",c);
  }
  p=m%a;
  q=n%a;
  printf("%d%d\n",p,q);
if(n>a&&m>a)
{
  if(p!=0&&q!=0)
  {
    c=c+1;
    printf("Inside if\n");
  }
}
else
{
  if(p!=0||q!=0)
  {
    c=c+1;
    printf("Inside if\n");
  }
}
printf("%lld",c);
}
