#include<stdio.h>
long int fact(int a)
{
  long int i=1,p=1;
  for(i=1;i<=a;i++)
  {
    p=p*i;
  }
  return p;
}
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
  long int n=0,i=0,s=0,d=0,q=1,Nm=0,Dm=0,t=0,k=0,a;
  scanf("%ld",&t);
  for(k=0;k<t;k++)
  {  d=0;
     s=0;
     i=0;
    scanf("%ld",&n);
    d=(n-(4*i)+i);
  //  printf("%d\n",d);
  //  q=fact(5);
  //printf("%d\n",q);
    while(d>0)
    {
      printf("The value of i is %d\n",i);
      printf("Inside While loop\n");
      Nm=fact(d);
      printf("Nm is %d\n",Nm);
      Dm=(fact(i)*fact(d-i));
      printf("Dm is %d\n",Dm);
      a=(fact(d)/(fact(i)*fact(d-i)));
      printf("The value of nuber added in this iteration %d\n",a);
      s=s+a;
      printf("%d\n",s);
      //q=Nm/Dm;
      //printf("q is %d\n",q);
      //s=s+q;
      //printf("%d",s);
      i=i+1;
      d=(n-(4*i)+i);
      printf("d at end of loop %d\n",d);
    }
    printf("The no. of possibility %d\n",s);
    q=prime(s);
    printf("%d\n",q);

  }
  return 0;
}
