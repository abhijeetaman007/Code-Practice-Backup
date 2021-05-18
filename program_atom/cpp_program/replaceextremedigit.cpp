#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n1,n,a,*i,c=0,t,b,d;
  scanf("%d",&n);
  n1=n;
  while(n!=0)
  {
    a=n%10;
    n=n/10;
    c++;
  }
  d=c;
  p=(int*)malloc(c*(sizeof(int)));
  //printf("%d\n",p);
  //printf("%d\n",p+c);
  while(n1!=0)
  {
    *(p+c-1)=n1%10;
    n1=n1/10;
    c=c-1;
  //  printf("test\n");
  }
//  printf("%d\n",*p);
//  printf("%d\n",*(p+1));
//  printf("%d\n",*(p+2));
//  printf("%d\n",*(p+3));

//  for(i=p;i<p+c;p++)
  //{
  //printf("%d\n",*p);
  //printf("hg");
  //}
t=*p;
*p=*(p+d-1);
*(p+d-1)=t;

/*printf("%d\n",*p);
printf("%d\n",*(p+1));
printf("%d\n",*(p+2));
printf("%d\n",*(p+3));
printf("val of d %d\n",d );
*/
for(i=p;i<p+d;i=i+1)
{
printf("%d",*i);
//p++;
}

  return 0;
}
