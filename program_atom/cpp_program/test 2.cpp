#include<stdio.h>
int main()
{
  int n,i,j,a[100][100],arr[100],s=0,sum[100],p=0,q=0,c=0,key=0,k=0;
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
    if(a[i][j]!=1)
    {
      key=a[i][j];
      printf("KEY found");
      p=i;
      q=j;

    for(k=0;k<(n-1);k++)
    {
      if(a[p][k]!=key)
      {arr[c]=a[p][k];
      c++;
      }
    }
    for(k=0;k<(n-1);k++)
    {
      if(a[k][q]!=key)
      {arr[c]=a[p][k];
      c++;
      }
    }

    for(p=0;p<n-1;p++)
    {
      for(q=0;q<n-p;q++)
      {
        sum[k]=arr[p]+arr[p+q];
        k++;
      }
    }
    for(p=0;p<n;p++)
   {
      if(sum[i]==key)
      {
        printf("Test");
      }
   }

  }

  }
}

}
