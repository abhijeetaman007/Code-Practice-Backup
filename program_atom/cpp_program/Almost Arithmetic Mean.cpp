#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i=0,j=0,count=0,l=0,k=0,d=0,c=0,res[1000000],flag=0,m=0,t=0,min=0;
  int a[1000000];
  scanf("%d",&n);
  int b[1000000];
  for(i=0;i<n;i++)
    scanf("%d",&b[i]);
  if(n>2){
                   for(i=-1;i<=1;i++)
             {
                for(j=-1;j<=1;j++)
                 {

                     count=0;
                   a[0]=b[0]+i;
                   a[1]=b[1]+j;
                    for(k=2;k<=n;k++)
                      a[k]=a[0]+((a[1]-a[0])*(k));
                    c=0;
                   for(l=0;l<n;l++)
                 {
                   d=abs(a[l]-b[l]);
                   if(d>1)
                     {
                     break;
                      }
                   else
                      {
                       if(d!=0)
                       count=count+1;
                          c=c+1;

        if(c==n)
        {
          res[m]=count;
          m++;
        }
      }
  }
    }
  }
  min=res[0];
for(i=0;i<m;i++)
{
if(min>res[i])
{
  min=res[i];
}
}
if(m!=0)
printf("%d",min);
  else
  printf("-1");
  }
  else
  {
    printf("0");
  }
  return 0;
}
