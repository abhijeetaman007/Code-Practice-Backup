#include<stdio.h>
int main(){
int t,i,a,m,n,s,c,d;
scanf("%d",&t);
for(i=0;i<t;i++)
    {
      scanf("%d",&n);
      scanf("%d",&m);
      scanf("%d",&s);
          a=(m%n)+s-1;
          if(a==0)
          {
            c=n;
          }
          else
            {
              if(a>n)
               c=a%n;
              else
                c=a;
            }
      printf("%d\n",c);
      }

          return 0;
  }
