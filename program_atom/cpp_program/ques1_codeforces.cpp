#include<stdio.h>
int main()
{
  int n=0,i=0,a[50][50],sum[100],c,d,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { for(j=0;j<n;j++)
    scanf("%d",a[i][j]);
  }
  for(i=0;i<n;i++)
  { for(j=0;j<n;j++)
    if(a[i][j]!=1)
    { //sum={-1};
       l=0;
      for(k=0;k<n;k++)
      {
        if(a[i][k]!=a[i][j])
        {
          sum[l]=a[i][j];
          l=l+1;
        }
      }

      for(k=0;k<n;k++)
      {
        if(a[k][j]!=a[i][j])
        {
          sum[l]=a[i][j];
          l=l+1;
        }
      }


    }
  }
  for(i=0;i<l;i++)
  printf("%d",sum[i]);
}
