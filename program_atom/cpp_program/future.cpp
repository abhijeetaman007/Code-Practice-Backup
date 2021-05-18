#include<stdio.h>
int main()
{
  int n,i,j,a[100][100],arr[100],s=0,sum[100],p=0,q=0,c=0,key=0,k=0,flag[100]={0},count=0,d=0,s1=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n;i++)
{

  for(j=0;j<n;j++)
  {
    //for(k=0;k<100;k++)
    //flag[k]=0;
    if(a[i][j]!=1)
    {
      count=count+1;
      key=a[i][j];
      printf("KEY found and key is %d\n",key);
      p=i;
      q=j;
      printf("Value of p %d\n",p);
      printf("Value of q %d\n",q);
     //p=0;
     //q=0;
    // b=0;
     c=0;
    for(k=0;k<n;k++)
    {
      if(a[p][k]!=key)
      {arr[c]=a[p][k];
        printf("the array element under check (%d,%d)",p,k);
        printf("%d\n",arr[c]);
      c++;
    //  b++;
      }
    }
    printf("Change\n");
    for(k=0;k<n;k++)
    {
      if(a[k][q]!=key)
      {arr[c]=a[k][q];
        printf("the array element under check (%d,%d)",k,q);
        printf("%d\n",arr[c]);
      c++;
  //    b++;
      }
    }
    //for()
  //  printf("%d\n",c);
    k=0;
    for(p=0;p<c-1;p++)
    {
      for(q=1;q<c-p;q++)
      {
         printf("%d  and  %d\n",p,(p+q));
        sum[k]=arr[p]+arr[p+q];
        printf("%d\n",sum[k]);
        k++;
      }
    }
    for(p=0;p<k;p++)
   {
      if(sum[p]==key)
      {
        flag[d]=1;
        d++;
        printf("break applied\n");
        break;
      }
   }

  }

  }
}
for(i=0;i<count;i++)
{
  printf("The flag array is %d\t",flag[i]);
}

for(i=0;i<count;i++)
{
  s1=flag[i]+s1;
}

if(s1==count)
printf("YES");
else
printf("NO");
}
