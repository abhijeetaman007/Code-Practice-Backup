#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i=0,j=0,count=0,l=0,k=0,d=0,c=0,res[10000],flag=0,m=0,temp=0,min=0;
  int a[10000];
  scanf("%d",&n);
  int b[10000];
  for(i=0;i<n;i++)
    scanf("%d",&b[i]);
  if(n>2){
                   for(i=-1;i<=1;i++)
             {
                for(j=-1;j<=1;j++)
                 {
  //  i=-1;j=0;
                     count=0;
//                   printf("The value of i %d\n",i);
//                 printf("The value of j %d\n",j);
                   a[0]=b[0]+i;
                   a[1]=b[1]+j;
                    for(k=2;k<=n;k++)
                      a[k]=a[0]+((a[1]-a[0])*(k));
                    c=0;
                   for(l=0;l<n;l++)
                 { // flag=0
                   d=abs(a[l]-b[l]);
  //      printf("The value of d is %d\n",d );
                   if(d>1)
                     {
          //printf("-1\n");
        //  flag=1;
                     break;
                      }
                   else
                      {
    //      c=c+1;
                       if(d!=0)
                       count=count+1;
                          c=c+1;
      //  res=count;
//                         printf("The value of c is %d\n",c);

        if(c==n)
        {
        //  flag=1;
          res[m]=count;
          m++;
//          printf("The value of result is %d\n",res);
        }


      }
  }
    //if(flag==1)
    //break;
    //  printf("The final count %d\n",count);
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

  //printf("The final answer is %d\n",res[1]);
}
